/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to convert code into source files                                                                             *
 * **********************************************************************************************************************/
/*Directives*/
//file inclusion - C built in libraries
#include<stdio.h> //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 
#include<time.h>  //for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/time_h.htm
//file includion - user defined library
#include "user_library.h"//notice the difference including the user defined library?

/* main function*/
void print_time(){
    time_t  starttime=time(NULL);
    time_t  currenttime;
    char respond = '\0';

    time(&currenttime);

    printf("Today's day, date, time and year is: %s", ctime(&currenttime));

    do{
        printf("Program has been running for %g sec. Press 'Q' or 'q' to quit program.\n", difftime(time(NULL), starttime));
        respond = getchar();
    }while(respond != 'Q' && respond != 'q');
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   The program above is slightly improved version from directiveone.c to show the concept of function              *
 * 2)   Do note that the information entered are not stored! We will cover how to do so later.                          *
 * 3)   These codes are create with the purpose to make mistake so the trainees is aware on coding mindset even the code*
 *      are just executing simple commands. (CAN YOU SPOT THE ERROR IN CODE? can you improve the program?)              *
 ************************************************************************************************************************/