/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to convert code into source files for building multiple file program                                          *
 * 2) The difference between header and source files                                                                    *
 * **********************************************************************************************************************/
/*Directives*/
//file inclusion - C built in libraries
#include <stdio.h> //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 
#include <string.h> //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/string_h.htm 
#include <stdlib.h> //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/string_h.htm
//file includion - user defined library
#include "sourceone.h"//notice the difference including the user defined library? This is because the header file is in the current directory
//macro definition
#define MAX_LENGTH 15   //macro define that MAX_LENGTH is constant represented by the value 15
#define MIN_AGE 20      //macro define that MIN_AGE is constant represented by the value 20

//function to prints the input required from user and store these input
void userinput(char *message, char *store_to_variable){
    printf("%s ", message);
    gets(store_to_variable);   
}
//function to print the full name entered by user
void print_fullname(char *firstname, char *lastname){
    char fullname[2*MAX_LENGTH+1];
    memset(fullname, '\0', sizeof(fullname)); //this initialize the firstname with NULL character. 
    strcpy(fullname, firstname);   //copies the firstname data into the fullname memory
    strcat(fullname, " ");         //concatenate a space after the last character stored in fullname
    strcat(fullname, lastname);    //concatenate the lastname data after the last character stored in fullname
    printf("Hi %s!\n", fullname);
}
//function returns the value
int check_user_input(char *alphabet_respond, int numeric_respond){
    if(numeric_respond < MIN_AGE){
        return -1;
    }
    else if(strcmp(alphabet_respond, "Y") == 0){
        return 1;
    }
    else if(strcmp(alphabet_respond, "N") == 0){
        return 0;
    }
    else{
        return -1;
    }
}

//This used to be the main() function but now it is converted into a user defined function
void function_one_c(char *sfirstname, char *slastname, unsigned int *age){
    /*statements*/
    char firstname[MAX_LENGTH+1] = {'\0'};  //declare and initialize elements of firstname with NULL character
    char lastname[MAX_LENGTH+1] = {'\0'};   //declare and initialize elements of firstname with NULL character

    userinput("Please enter your first name:", firstname);  //Request user to type firstname with maximum length of 15
    userinput("Please enter your last name:", lastname);    //Request user to type lastname with maximum length of 15
    print_fullname(firstname, lastname);    //Prints the information typed by the user
    strcpy(sfirstname, firstname);
    strcpy(slastname, lastname);

    //Statement to request user to key age
    char user_respond[2] = {'\0'};   //declare and initialize memory label final_answer with NULL character
    do{
        userinput("What is your age?", user_respond);   //request user for age
        *age = atoi(user_respond);   //converts string data type to integer data type
        userinput("Is that your final answer? (Press 'Y' for yes or 'N' for No):", user_respond);   //confirm user's age
        
        if( check_user_input(user_respond, *age) < 0 ){   //this statement scans if user enter in the right input
            printf("You trying to be funny? Try again\n");
        }
    }while( check_user_input(user_respond, *age) <= 0 );

    if(*age >= MIN_AGE && *age <25){  //This statement prints according to the age input by the user
        printf("Hmmmm... okay :p\n");
    }
    else{
        printf("Welcome to the club OP!\n");
    }
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   Notice that the source code is similar to functionone.c? However there are a few changes made to the file:-     *
 *      a) int main() function is change to function_one_c(char *sfirstname, char *slastname, unsigned int *age).       *
 *      b) notice the arguements are pointers as any change of values will be stored to the main program variables.     *
 *      c) There is a inclusion of header file "sourceone.h" which share the same name as its source file   	        * 
 * 2)   Notice that source files contains the function definition. Unlike header file only contains function declaration*
 * 3)   It is a good practice that each source file serve a purpose as not to duplicate function with other source files*
 ************************************************************************************************************************/