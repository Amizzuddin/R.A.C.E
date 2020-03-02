/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to convert code into source files for building multiple file program                                          *
 * 2) The difference between header and source files                                                                    *
 * **********************************************************************************************************************/
/*Directives*/
//file inclusion - C built in libraries
#include <stdio.h> ////for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 
#include <math.h> ////for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/math_h.htm
//file includion - user defined library
#include "sourcetwo.h"//notice the difference including the user defined library?This is because the header file is in the current directory
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

//This used to be the main() function but now it is converted into a user defined function
void function_two_c(float *height, float *weight, double *bmi){
    //request user to enter height
    *height = user_input("Please enter your height in metres:", MIN_HEIGHT);
    printf("Your height is: %.2fm\n", *height);
    
    //request user to enter weight
    *weight = user_input("Please enter your weight in kilograms:", MIN_WEIGHT);
    printf("Your weight is: %.2fkg\n", *weight);
    
    *bmi = *weight/pow((double)*height,2);
    printf("Your Body Mass Index (BMI) is: %.2f\n", *bmi );
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   Notice that the source code is similar to functiontwo.c? However there are a few changes made to the file:-     *
 *      a) int main() function is change to function_two_c(float *height, float *weight, double *bmi).                  *
 *      b) notice the arguements are pointers as any change of values will be stored to the main program variables.     *
 *      c) There is a inclusion of header file "sourcetwo.h" which share the same name as its source file   	        * 
 * 2)   Notice that source files contains the function definition. Unlike header file only contains function declaration*
 * 3)   It is a good practice that each source file serve a purpose as not to duplicate function with other source files*
 ************************************************************************************************************************/