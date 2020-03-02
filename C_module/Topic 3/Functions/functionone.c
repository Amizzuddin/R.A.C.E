/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to declare and define a function                                                                              *
 * 2) How to call a function                                                                                            *
 * 3) The purpose of macro definition (#define)                                                                         *
 * **********************************************************************************************************************/
/*Directives*/
//file inclusion - C built in libraries
#include <stdio.h> //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 
#include <string.h> //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/string_h.htm 
#include <stdlib.h> //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/string_h.htm 
//macro definition
#define MAX_LENGTH 15   //macro define that MAX_LENGTH is constant represented by the value 15
#define MIN_AGE 20      //macro define that MIN_AGE is constant represented by the value 20

/*user function*/
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

/*main function*/
int main(){
    /*statements*/
    char firstname[MAX_LENGTH+1] = {'\0'};  //declare and initialize elements of firstname with NULL character
    char lastname[MAX_LENGTH+1] = {'\0'};   //declare and initialize elements of firstname with NULL character

    userinput("Please enter your first name:", firstname);  //Request user to type firstname with maximum length of 15
    userinput("Please enter your last name:", lastname);    //Request user to type lastname with maximum length of 15
    print_fullname(firstname, lastname);    //Prints the information typed by the user

    //Statement to request user to key age
    unsigned int age = 0; //declare and initialize memory label age as 0
    char user_respond[2] = {'\0'};   //declare and initialize memory label final_answer with NULL character
    do{
        userinput("What is your age?", user_respond);   //request user for age
        age = atoi(user_respond);   //converts string data type to integer data type
        userinput("Is that your final answer? (Press 'Y' for yes or 'N' for No):", user_respond);   //confirm user's age
        
        if( check_user_input(user_respond, age) < 0 ){   //this statement scans if user enter in the right input
            printf("You trying to be funny? Try again\n");
        }
    }while( check_user_input(user_respond, age) <= 0 );

    if(age >= MIN_AGE && age <25){  //This statement prints according to the age input by the user
        printf("Hmmmm... okay :p\n");
    }
    else{
        printf("Welcome to the club OP!\n");
    }

    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   The program above is slightly improved version from directiveone.c to show the concept of function . Do you     *
 *      agree that the code is more organize and easy to read?                                                          *
 * 2)   As mentioned on directiveone.c, the information entered are not stored! We will cover how to do so later.       *
 * 3)   These codes are create with the purpose to make mistake so the trainees is aware on coding mindset even the code*
 *      are just executing simple commands. (CAN YOU SPOT THE ERROR IN CODE? can you improve the program?)              *
 ************************************************************************************************************************/