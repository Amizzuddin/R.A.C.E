/**********************************************************************************************************************************************************
 * This program is design to understand the following:                                                                                                    *
 * 1) the basic types of variables such as:                                                                                                               *
 *      a)  char    =   for datas that contains a character in ASCII table (http://www.asciitable.com/)                                                   *
 *      b)  int     =   for datas that contains whole numbers                                                                                             *
 *      c)  float   =   for datas that contains decimal numbers (single precision)                                                                        *
 *      d)  double  =   for datas that contains decimal numbers (double precision)                                                                        *
 * 2) the usage of operators                                                                                                                              *
 *      a) assignment    =   assignning values to variables                                                                                               *
 *      b) arithmetic    =   performing multiplication, divison, addition and subtraction                                                                 *
 *      c) miscellaneous =   (sizeof) evaluates the size of data type of a variable (1 byte = 8 bits)                                                     *
 *                           (cast) perform explicit conversion to a desired data type.                                                                   *
 * ********************************************************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/
    int data_size = 0;                  //declare a variable with data type int to store the number of bytes for different types of data type

    //Line 23 to 26 are commands that deals with data type char.
    char character = '\0';              //declare a variable with data type char and initialize it with a null character.
    data_size = sizeof(character);      //data_size now contains the number of bytes for char 
    character = 49;                     //Assignment operator - Have you notice the value of character is '1'? It is as per ASCII table
    character = 'A';                    //Assignment operator - Is it easier to understand this assignment for char data types?
    
    //Line 29 to 34 are commands that deals with data type int.
    int whole_number = 0;               //declare a variable with data type int and initialize it with a value of 0.
    data_size = sizeof(whole_number);   //data_size now contains the number of bytes for int
    whole_number = whole_number  + 1;   //Arithmetic + Assignment operator - The value of currently stored on whole_number is added to 1.
    whole_number += 1;                  //Assignment operator - Do you realize the execuetion of this line is similar to line 27?
    whole_number++;                     //Arithmetic Operator - Do you realize the execuetion of line is similar to line 27?
    whole_number = whole_number << 1;   //Bitwise + Assignment operator - Have you realize this line is similar to  whole_number = whole_number * 2?
    //shift left <<, program execute multiplication of 2. Wherelse shift right >>, program execute devision of 2

    //Line 38 to 42 are commands that deals with data type float.
    float decimal_number1 = 0.0;                   //declare a variable with data type float and initialize it with a value of 0.0.
    data_size = sizeof(decimal_number1);           //data_size now contains the number of bytes for float
    decimal_number1 = 1/2;                         //Arithmetic + Assignment operator - Have you notice the value is still reflecting as 0 when it should be 0.5?
    decimal_number1 = 1.0 / (double) whole_number; //Arithmetic + Assignment operator - Now decimal_number1 is reflecting the correct value which is 0.5!
    decimal_number1 = (int) decimal_number1 << 4;  //Cast + Bitwise + Assignment operator - To perform bitwise shift its require to type cast which round off to whole number

    //Line 45 to 49 are commands that deals with data type double.
    double decimal_number2 = 0.0;                      //declare a variable with data type double and initialize it with a value of 0.0.
    data_size = sizeof(decimal_number2);               //data_size now contains the number of bytes for double
    decimal_number2 = 1/2;                             //Arithmetic + Assignment operator - Have you notice that this has the same problem as line 41?
    decimal_number2 = 1.0 / (double) whole_number;     //Arithmetic + Assignment operator - Cast whole_number to a double type to prevent problem line 47    
    decimal_number2 = ((int) decimal_number2 + 1) << 4;//Cast + Bitwise + Assignment operator -
    //decimal_number2 = decimal_number2 / whole_number;   //Arithmetic + Assignment operator -
    //Have you notice the difference in the accuracy for both 

    return 0;
}
/*******************************************************************************************************************************************************************************
 * Summary on example 1                                                                                                                                                        *
 * 1)   Debugging tool helps us to understand how the program execute without the need to use printf() function from stdio.h                                                   *
 * 2)   It is a good practice to make a variable declaration close they are being use.                                                                                         *
 * 3)   Always know the kind of values you are dealing with to assign the correct data type for the program to execute.                                                        *
 * 4)   Each data types have its representation. Without knowing the data you are dealing with. You may not able to obtain the expected result when the program execute.       *
 * 5)   Some operators are illegal to use on some data types. For example you unable to use bitwise operator on float or double unless you type the data into int.             *
 * 6)   When dealing with float or double data_types, it is important to have the numbers in decimal values as well!                                                           *
 * 7)   When dealing with decimal numbers, its important to understand the importance of the accuracy you required. Using higher accuracy will affect the space usage as well. *
 *******************************************************************************************************************************************************************************/