/**********************************************************************************************************************************************************
 * This program is design to understand the following:                                                                                                    *
 * 1) the basic types of variables such as:                                                                                                               *
 *      a)  int     =   for datas that contains whole numbers                                                                                             *
 *      b)  typedef =   to create a new data types which uses basic types                                                                                 *
 * 2) the usage of operators                                                                                                                              *
 *      a) assignment    =   assignning values to variables                                                                                               *
 *      b) bitwise       =   OR, XOR, bitshifting, AND & NOT                                                                                              *
 *      c) logical       =   returns a value of true=1 or false=0 by bitwise operation on the two numbers, if result > 0 will return true, or else false  *
 *      d) relational    =   returns a value of true=1 or false=0 by comparing on the relation of the two numbers                                         *
 *      e) miscellaneous =   (sizeof) evaluates the size of data type of a variable (1 byte = 8 bits)                                                     *
 *                           (Ternary) perform decision making assignment.                                                                                *
 * ********************************************************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

typedef unsigned int byte;      //declares a new type name 'byte' which has teh same data type as int

/*Main function*/
int main(){
    /*Statements*/
    int data_size = 0;          //declare a variable with data type int to store the number of bytes for different types of data type
    
    byte byteA = 0b00000000;    //variable declaration in binary which mean 0 in decimal or 0x00 in hexadecimal
    byte byteB = 0x01;          //variable declaration in binary which mean 1 in decimal or 0x01 in hexadecimal
    data_size = sizeof(byteA);  //data_size now contains the number of bytes for byte which is actually the same size as int data type.
    byteA |= 0x1A;              //bitwise assignment - this statement is the same as byteA = byteA | 0b00011010
    byteB <<= 2;                //bitwise assignment - this statement is the same as byteB = byteB << 2 whihc is similar to byteB = byteB * 4
    byteB = byteA & 0x06;       //bitwise assignemnt - have you realize when you use AND operator to obtain the bit you want?
    byteA ^= 0x19;              //bitwise assignment - have you realize when you use XOR operator to find out which data has been change?
    byteB = ~byteB;             //bitwise assignment - To invert the values of byteB
    byteB = (byteB >= 0x10) ? 0 : 2;    //Ternary + relational + assignment - This statement means if byteB >= 10, byteB = 0. else byteB = 2
    byteA = (!(byteA && byteB)) ? 0: 1; //Ternary + logical + assignment - This statement means if both byteA and byteB = 0, byteA = 1. else byteA = 0
    byteA = (byteA == byteB);

    return 0;
}
/*****************************************************************************************************************************************************
 * Summary on example 2                                                                                                                              *
 * 1) Typedef is used to defined a data type which has useful meaning to the reader.                                                                 *
 *    However, the user defined data type still takes up the basic data type understood byt the computer.                                            *
 * 2) Logical and Relational operator is used to compare and return a result if the statement is true or false.                                      *
 *    example, apple is red is writen as (apple == red) and the values it return is either 1(true) or 0(false)                                       *
 * 3) & operator is used when you are performing masking (obtaining the bits position you are interested)                                            *
 * 4) ^ operator is used to check if there is any change from the expected result.                                                                   *
 * 5) | operator is used to change the values of bit which has the value of 0.                                                                       *
 *    you can use this for changing a value without affecting the rest of the initial values of the data                                             *
 * 6) Ternary operator is useful when you are performing a selection of value based on condition. It is similar to if... else statement.             *
 * 7) Operators can be confusing when you compoung them together. It is encourage to add brackets to tell the program which statement to apply first.*
 *****************************************************************************************************************************************************/