/**********************************************************************************************************************************************************
 * This program is design to understand the following:                                                                                                    *
 * 1) the basic types of variables such as:                                                                                                               *
 *      a)  int     =   for datas that contains whole numbers                                                                                             *
 *      b)  char    =   for datas that contains a character in ASCII table (http://www.asciitable.com/)                                                   *
 * 2) the usage of operators                                                                                                                              *
 *      a) assignment    =   assignning values to variables                                                                                               *
 *      b) bitwise       =   OR, XOR, bitshifting, AND & NOT                                                                                              *
 *      c) arithmetic    =   performing multiplication, divison, addition and subtraction                                                                 *
 *      d) logical       =   returns a value of true=1 or false=0 by bitwise operation on the two numbers, if result > 0 will return true, or else false  *
 *      e) relational    =   returns a value of true=1 or false=0 by comparing on the relation of the two numbers                                         *
 *      f) miscellaneous =   (sizeof) evaluates the size of data type of a variable (1 byte = 8 bits)                                                     *
 *                           (referrence) copied the address of a variable                                                                                *
 *                           (dereferrence) access the values contain in the memory address                                                               *
 * ********************************************************************************************************************************************************/

/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/
    int data_size = 0;          //declare a variable with data type int to store the number of bytes for different types of data type
    int variableA = 10;         //declare a variable with data type int and initialize it with a value of 10
    int *pointer_to_variableA;  //declare a pointer variable that only points to variables with data type int
    char variableB = 'a';       //declare a variable with data type char and initialize it with character 'a'
    char *pointer_to_variableB; //declare a pointer variable that only points to variables with data type char

    pointer_to_variableA = &variableA;          //assign pointer_to_variableA with the address of variableA
    data_size = sizeof(&variableA);             //Did you make a guess before you check this value?
    data_size = sizeof(variableA);              //What did you observe?
    data_size = sizeof(pointer_to_variableA);   //take note the value of data_size
    data_size = sizeof(*pointer_to_variableA);  //What did you observe?
    pointer_to_variableB = &variableB;          //assign pointer_to_variableB with the address of variableB
    data_size = sizeof(&variableB);             //Did you make a guess before you check this value?
    data_size = sizeof(variableB);              //What did you observe?
    data_size = sizeof(pointer_to_variableB);   //is your guess for this line the same as line 30 and 31?
    data_size = sizeof(*pointer_to_variableB);  //What did you observe?

    *pointer_to_variableA <<= 2;    //change the value that pointer_to_variableA is pointing to. Let's observe the value of *pointer_to_variableA
    variableA = (variableA == 10);  //to check if there is any change to variableA since we first initialize the value as 10 as per line 24
    *pointer_to_variableB += 2;     //change the value that pointer_to_variableB is pointing to. Let's observe the value of *pointer_to_variableB
    variableB = !(variableB == 'a');//to check if there is any change to variableB since we first initialize with character 'a' as per line 26
    return 0;
}
/*******************************************************************************************************************************************************************************
 * Summary on example3                                                                                                                                                         *
 * 1) Pointer may seems confusing at first, but it is the most useful feature in C. This is because its ability to change the value at the address its pointing to             *
 *    (pointer varaible = &addres to variable). You will notice how useful this feature when we cover on the topic of functions and data structures.                           *
 * 2) Notice that sizeof operator returns the number of bytes on a pointer variable the number of bits of your processor and operating system?                                 *
 * 3) Char data type can add with constant values but the number it represent is still a character.                                                                            *
 *    Based on ASCII, 97 represent 'a' when 97+2=99 that represent 'c' on ASCII                                                                                                *
 * 4) ! logical operator inverts the result such that when its true = 0  and false = 1                                                                                         *
 *******************************************************************************************************************************************************************************/