/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) How to read and write a file through c program using <stdio.h> library.                                           *
 * 2) How to call a function                                                                                            *
 * **********************************************************************************************************************/
//https://www.tutorialspoint.com/cprogramming/c_file_io.htm
/*Directives*/
//file inclusion - C built in libraries
#include<stdio.h>//for function available in this library visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 

/* main function*/
int main(){
    /*statements*/
    FILE *fp;//notice FILE is a type(FILE is declared in stdio.h)? so fp is a file pointer of type FILE

    //Lines 17 to 21 is to write data into the file
    fp = fopen("file_io.csv","w");  //to create(if file does not exist) or open file for writing purpose
    fprintf(fp, "HELLO NEW FILE!\n");   //first method to write a file
    fputs("Another test coming!\n",fp); //second method to write a file
    fprintf(fp, "1,2,3,4,5,6,7\n"); //Notice what the comma does to the file?
    fclose(fp);

    //Lines 24 to 20 is to write data into the file
    char buff[255]; //create a buffer array to temporarily store data stream from file
    fp = fopen("data_storage.csv","r"); //to create(if file does not exist) or open file for read purpose
    fscanf(fp,"%s", buff); //first method to read a file 
    printf("1. %s\n", buff);    //display the data read
    fgets(buff, 255, (FILE*)fp);//second method to read a file 
    printf("2: %s\n", buff );   //display the data read
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fgets(buff, 255, (FILE*)fp);//Notice how the data in excels cells read by the program?
    printf("4: %s\n", buff );
    fclose(fp);
    
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