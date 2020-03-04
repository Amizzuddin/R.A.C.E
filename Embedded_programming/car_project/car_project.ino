/************************************************************************************************************************
 * This program is design for RACE curicullum                                                                  *
 * 1) Encoder wheel, 1 rotation = 20 ticks = 21cm = 210mm                                                                  *
 * 2)                                                 *
 * **********************************************************************************************************************/
#include <Bitblue.h>
#include <Servo.h>
#include <L298N.h>

#define CHECK 0
#define BLE_CHECK 0

/*Arduino pin definition*/
//H-bridge pins
#define INA A0
#define INB A1
#define INC A2
#define IND A3
#define ENA 5 //10
#define ENB 6 //11
//servo pins
#define GRIPPER 9
#define WRIST 8

/*Firmware constants*/
//Phone  Bitblue app key mapping
#define LEFT 'L'
#define RIGHT 'R'
#define UP 'U'
#define DOWN 'D'
#define SELECT 'C'
#define START 'S'
#define A 'A'
#define B 'B'
#define Y 'Y'
#define X 'X'
//Servo states
#define GRIPPER_OPEN 5
#define GRIPPER_CLOSE 30 //65
#define WRIST_UP 90
#define WRIST_DOWN 0
#define DIGITAL_INCREMENT 10
//keypad states
#define STOP 0b0000
#define FORWARD 0b1010
#define REVERSE 0b0101
#define POINT_LEFT 0b1001
#define POINT_RIGHT 0b0110
//Spped values
#define TURN_SPEED 80
#define LINEAR_SPEED 100
#define TERMINATE_SPEED 0

Bitblue_ble_app remote(LEFT, RIGHT, UP, DOWN, SELECT, START, A, B, Y, X);
Servo gripper;
Servo wrist;
L298N Hbridge(INA, INB, INC, IND, ENA, ENB);

struct AGV{
    bool servo_gripper;
    bool servo_wrist;
    byte direction;
}car = {true, true, 0};

void setup(){
    remote.initialize(9600);
    gripper.attach(GRIPPER);
    wrist.attach(WRIST);
    servo_control();
    Hbridge.initialize();
}

void loop(){
    remote.read_keypad(); //will read if receive app command and previous data has been read
    if( remote.iskeypadRead_complete() ){
        update_controls();
        #if CHECK
        Serial.print(car.servo_gripper);
        Serial.write(",");
        Serial.print(car.servo_wrist);
        Serial.write(",");
        Serial.print(car.direction);
        Serial.println();
        #endif
    }
}

void update_controls(){
    switch ( remote.getkeypad() ){
        case X: car.servo_gripper = !car.servo_gripper; servo_control(); break;
        case Y: car.servo_wrist = !car.servo_wrist; servo_control(); break;
        case A: navigation_update(STOP); break;
        case LEFT: navigation_update(POINT_LEFT); break;
        case RIGHT: navigation_update(POINT_RIGHT); break;
        case UP: navigation_update(FORWARD); break;
        case DOWN: navigation_update(REVERSE); break;
    } 
}

void servo_control(){
    if (car.servo_gripper){
        gripper.write(GRIPPER_OPEN);
        #if CHECK
        Serial.write("G open");
        #endif
    }
    else{
        gripper.write(GRIPPER_CLOSE); //may need to change
        #if CHECK
        Serial.write("G close");
        #endif
    }
    #if CHECK
    Serial.write(",");
    #endif
    if (car.servo_wrist){
        wrist.write(WRIST_DOWN);
        #if CHECK
        Serial.write("W down");
        #endif
    }   
    else{
        wrist.write(WRIST_UP);
        #if CHECK
        Serial.write("W up");
        #endif
    }
    #if CHECK
    Serial.write(",");
    //Serial.println();
    #endif
}

void navigation_update(byte ble_dpad){
    byte Left_motor_pwm = 0, Right_motor_pwm = 0;
    switch (ble_dpad){
    case STOP: Left_motor_pwm = Right_motor_pwm = TERMINATE_SPEED; car.direction = STOP; break;
    case FORWARD: Left_motor_pwm = Right_motor_pwm = LINEAR_SPEED; car.direction = FORWARD; break;
    case REVERSE: Left_motor_pwm = Right_motor_pwm = LINEAR_SPEED; car.direction = REVERSE; break;
    case POINT_LEFT: 
        if(car.direction != STOP){
            Left_motor_pwm = TURN_SPEED;
            Right_motor_pwm = LINEAR_SPEED;
        }
        else{
            Left_motor_pwm = Right_motor_pwm = TURN_SPEED;
            car.direction = POINT_LEFT;
        }
        break;
    case POINT_RIGHT: 
        if(car.direction != STOP){
            Left_motor_pwm = LINEAR_SPEED;
            Right_motor_pwm = TURN_SPEED;
        }
        else{
            Left_motor_pwm = Right_motor_pwm = TURN_SPEED;
            car.direction = POINT_RIGHT;
        }
        break;
    }
    Hbridge.drive_motor(car.direction, Left_motor_pwm, Right_motor_pwm);
    #if BLE_CHECK
    remote.write(Left_motor_pwm, Right_motor_pwm);        
    #endif
    #if CHECK
    Serial.print(Left_motor_pwm);
    Serial.write(",");
    Serial.print(Right_motor_pwm);
    Serial.write(",");
    #endif
}