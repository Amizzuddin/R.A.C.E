/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to create a header file to include multiple source files                                                      *
 * 2) The difference between header and source files                                                                    *
 * **********************************************************************************************************************/
#ifndef  sourcetwo_H
#define  sourcetwo_H

/************************************************************************************************************************
 * userinput: prints message to stdout (LCD display) to request user for input                                          *
 * **********************************************************************************************************************/
float user_input(char *message, float limit);

/************************************************************************************************************************
 * userinput: prints message to stdout (LCD display) to request user for input                                          *
 * **********************************************************************************************************************/
void function_two_c(float *height, float *weight, double *bmi);

#endif
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   Notice that header files only contain function prototype (function declaration)? You can define a function in   *
 *      the header file. unlike source (.c) file, a header file can contain multiple source file. it is useful that the *
 *      header file contains function prototype for the function you're using.                                          *
 ************************************************************************************************************************/