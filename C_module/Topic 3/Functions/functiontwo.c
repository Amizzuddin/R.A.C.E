/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to declare and define a function                                                                              *
 * 2) How to call a function                                                                                            *
 * 3) The purpose of macro definition (#define)                                                                         *
 * **********************************************************************************************************************/
/*Directives*/
//file inclusion - C built in libraries
#include <stdio.h> ////for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 
#include <math.h> ////for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/math_h.htm
//macro definition
#define MIN_HEIGHT 0.5      //macro define that MIN_HEIGHT is constant represented by the value 0.5
#define MIN_WEIGHT 30.0     //macro define that MIN_WEIGHT is constant represented by the value 30.0

/*user function*/
float user_input(char *message, float limit){
    float store_to_variable = 0.0;
    do{
        printf("%s ", message);
        scanf("%f", &store_to_variable);
        while( getchar() != '\n' ); //to flush newline character in the input buffer
        if(store_to_variable < limit){
            printf("Incorrect input, Try again!\n");
        }
    }while(store_to_variable < limit);

    return store_to_variable;
}

/*main function*/
int main(){
    /*statements*/
    float height = 0.0;
    float weight = 0.0;
    double bmi = 0.0;

    //request user to enter height
    height = user_input("Please enter your height in metres:", MIN_HEIGHT);
    printf("Your height is: %.2fm\n", height);
    
    //request user to enter weight
    weight = user_input("Please enter your weight in kilograms:", MIN_WEIGHT);
    printf("Your weight is: %.2fkg\n", weight);
    
    printf("Your Body Mass Index (BMI) is: %.2f\n", ( weight/pow(height,2) ) );
    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   The program above is slightly improved version from directivetwo.c to show the concept of function . Do you     *
 *      agree that the code is more organize and easy to read?                                                          *
 * 2)   As mentioned on directiveone.c, the information entered are not stored! We will cover how to do so later.       *
 * 3)   Notice that directiveone.c and this file have the same purpose which is to take in user input and check the     *
 *      input? (Can we improve the program such that there two .c files combined into one?)                             *
 ************************************************************************************************************************/