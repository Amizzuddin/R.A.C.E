/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to create a header file to include multiple source files                                                      *
 * 2) The difference between header and source files                                                                    *
 * **********************************************************************************************************************/
#ifndef  sourceone_H 
#define  sourceone_H
//lines 6&7 protects sourceone.h from being included more than once. It's a good practice to protect all header files this way.
/************************************************************************************************************************
 * userinput: prints message to stdout (LCD display) to request user for input                                          *
 * **********************************************************************************************************************/
void userinput(char *message, char *store_to_variable);

/************************************************************************************************************************
 * print_fullname: prints the fullanem input by the user                                                                *
 * **********************************************************************************************************************/
void print_fullname(char *firstname, char *lastname);

/************************************************************************************************************************
 * check_user_input: check the input respond by the user ensure inout is valid else reject                              *
 * **********************************************************************************************************************/
int check_user_input(char *alphabet_respond, int numeric_respond);

/************************************************************************************************************************
 * function_one_c: a collective use of userinput, print_fullname and check_user_input functions. request user for       *
 *                 first and last name, display the full name, request for user's age and display the age.              *
 * **********************************************************************************************************************/
void function_one_c(char *sfirstname, char *slastname, unsigned int *age);

#endif
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   Notice that header files only contain function prototype (function declaration)? You can define a function in   *
 *      the header file. unlike source (.c) file, a header file can contain multiple source file. it is useful that the *
 *      header file contains function prototype for the function you're using.                                          *
 ************************************************************************************************************************/