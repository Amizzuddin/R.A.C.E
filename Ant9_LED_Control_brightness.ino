#define RED 9
#define MAX_BRIGHTNESS 255

void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600); //to start UART communication
}

void loop()
{
  for(int light= 0; light <= MAX_BRIGHTNESS; light++){
    analogWrite(RED, light); //light led based on value of light
  	delay(10); //do nothing for 10 msec
    //to print values on the serial monitor
    Serial.print("brightness = ");
    Serial.println(light);
  }
}
