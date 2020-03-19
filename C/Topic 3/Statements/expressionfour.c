/**********************************************************************************************************************************************************
 * This program is design to understand the following:                                                                                                    *
 * 1) the basic types of variables such as:                                                                                                               *
 *      a)  int     =   for datas that contains whole numbers                                                                                             *
 * 2) the usage of operators                                                                                                                              *
 *      a) assignment    =   assignning values to variables                                                                                               *
 *      b) arithmetic    =   performing multiplication, divison, addition and subtraction                                                                 *
 *      c) logical       =   returns a value of true=1 or false=0 by bitwise operation on the two numbers, if result > 0 will return true, or else false  *
 *      d) miscellaneous =   (sizeof) evaluates the size of data type of a variable (1 byte = 8 bits)                                                     *
 *                           (Ternary) perform decision making assignment.                                                                                *
 *                           (referrence) copied the address of a variable                                                                                *
 *                           (dereferrence) access the values contain in the memory address                                                               *
 * ********************************************************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*global variable*/
int global_variable = 0; //declare a global variable with data type int - this variable only exist in the expressionfour.c file. 
//To observe the value of global variable, you need to add expression in the watch section

/*Main function*/
int main(){
    /*Statements*/

    /*local variable*/
    int data_size = 0;                      //declare a local variable with data type int to store the number of bytes for different types of data type
    int local_variable = 0;                 //declare a local variable with data type int - this variable only exist in the main()   
    data_size = sizeof(global_variable);    //Have you notice that there is a change of value? does it represent a size of int?

    int *pointer;                                         //declare a variable with data type int and initialize it with a value of 10
    pointer = &global_variable;                           //assign pointer_to_variableA with the address of global_variable
    *pointer = (*pointer == local_variable) ? 50: 10;     
    pointer = &local_variable;                            //assign pointer_to_variableA with the address of local_variable
    *pointer = (*pointer == local_variable) ? 2 << local_variable + 1 : local_variable - 1 ; 

    return 0;
}
/************************************************************************************************************************************************************************
 * Summary on example 4                                                                                                                                                 *
 * 1) Pointer variable can change address along the way. This makes pointer address flexible. This flexibity will be further explorered later in the examples           *
 * 2) Notice that global variable can access into the main() function? this applies the same for any function available in the .c file.                                 *
 *    However, using a global variable has its pitfalls expecially when you declare a local variable with the same declarator as the global variable                    *
 * 3) Have you notice on line 34, without the bracket. the execuetion of the operators are based on the operator preceedence?                                           *
 * 4) ! logical operator inverts the result such that when its true = 0  and false = 1                                                                                  *
 ************************************************************************************************************************************************************************/