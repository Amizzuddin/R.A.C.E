/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to link and compile multiple files                                                                            *
 * 2) How to call a function from user library based on the header file                                                 *
 * **********************************************************************************************************************/
/*Directives*/
//file inclusion - C built in libraries
#include <stdio.h> ////for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 
//file includion - user defined library
#include "sourceone.h"//notice the difference including the user defined library?
#include "sourcetwo.h"//This is because the header file is in the current directory.

/* main function*/
int main(){
    /*statements*/
    struct data{
        char firstname[21];
        char lastname[21];
        unsigned int age;
        float height;
        float weight;
        double bmi;
    };
    struct data trainee={{'\0'}, {'\0'}, 0, 0.0, 0.0, 0.0};
    
    function_one_c(trainee.firstname, trainee.lastname, &trainee.age);
    function_two_c(&trainee.height, &trainee.weight, &trainee.bmi);

    FILE *fp;//notice FILE is a type(FILE is declared in stdio.h)? so fp is a file pointer of type FILE
    fp = fopen("complete_program.csv","a");  //to create(if file does not exist) or open file in appending mode
    fprintf(fp, "%s,%s,%d,%.2f,%.2f,%.2f\n", trainee.firstname, trainee.lastname, trainee.age, trainee.height, trainee.weight, trainee.bmi); //send the data to .csv file
    fclose(fp);
    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   Notice how easy to read the main file? There is less lines and on top of that its easy to debug the problem if  *
 *      the program doesn't behave accordingly.                                                                         *
 * 2)   Notice that usage of struct data type make the variables more meaningful?                                       *
 * 3)   In this example, we use struct as union can only store one data at any given time. Since we need the data to    *
 *      for data stream into csv file. Therefore sturct is a good choice of data structure
 ************************************************************************************************************************/