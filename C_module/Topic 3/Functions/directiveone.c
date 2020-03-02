/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to include C buil-in libraries into C file                                                                    *
 * 2) How to call the functions that available in the library                                                           *
 * 3) The purpose of macro definition (#define)                                                                         *
 * **********************************************************************************************************************/
/*Directives*/
//file inclusion - C built in libraries
#include <stdio.h>//for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 
#include <string.h>// for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/string_h.htm
//macro definition
#define MAX_LENGTH 15   //macro define that MAX_LENGTH is constant represented by the value 15
#define MIN_AGE 20      //macro define that MIN_AGE is constant represented by the value 20

/* main function*/
int main(){
    /*statements*/

    char firstname[MAX_LENGTH+1] = {'\0'};      //declare and initialize elements of firstname with NULL character
    char lastname[MAX_LENGTH+1] = {'\0'};       //declare and initialize elements of firstname with NULL character
    char fullname[2*MAX_LENGTH+1];
    memset(firstname, '\0', sizeof(firstname)); //this initialize the firstname with NULL character.

    //Statement to request user to type firstname with maximum length of 10
    printf("Please enter your first name:\n");
    gets(firstname);                //library function to get input from user
    strcpy(fullname, firstname);    //copies the firstname data into the fullname memory
    
    strcat(fullname, " "); //concatenate a space after the last character stored in fullname
    
    //Statement to request user to type lastname with maximum length of 10
    printf("Please enter your last name:\n");
    gets(lastname);
    strcat(fullname, lastname);    //concatenate the lastname data after the last character stored in fullname

    printf("Hi %s!\n", fullname);

    //Statement to request user to key age
    unsigned int age = 0; //declare and initialize memory label age as 0
    char final_answer = '\0';   //declare and initialize memory label final_answer with NULL character
    do{
        printf("What is your age?\n");
        scanf("%d", &age);
        while( getchar() != '\n' ); //to flush newline character in the input buffer
        printf("Is that your final answer? (Press 'Y' for yes or 'N' for No):");
        scanf("%c", &final_answer); 
        while( getchar() != '\n');  //to flush newline character in the input buffer
        //this statement scans if user enter in the right input
        if( (final_answer != 'Y' && final_answer != 'N') || age < MIN_AGE){
            printf("You trying to be funny? Try again\n");
        }
    }while( (final_answer != 'Y') || age < MIN_AGE);

    //This statement prints according to the age input by the user
    if(age >= MIN_AGE && age <25){
        printf("Hmmmm... okay :p\n");
    }
    else{
        printf("Welcome to the club OP!\n");
    }

    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   The program execute commands to request input from the user and responds accordingly.                           *
 * 2)   Do note that the information entered are not stored! We will cover how to do so later.                          *
 * 3)   These codes are create with the purpose to make mistake so the trainees is aware on coding mindset even the code*
 *      are just executing simple commands. (CAN YOU SPOT THE ERROR IN CODE? can you improve the program?)              *
 ************************************************************************************************************************/