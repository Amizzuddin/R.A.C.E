/*******************************************************************
 * This code is built to understand the following:                 *
 * 1) File scope of a variable                                     *
 * DO NOT FORGET TO ADD BREAKPOINTS to see how the code behaves    *
 * *****************************************************************/

/*Directives*/
//no library is required as we willb be using debugging tool to understand How the code is being execueted

//Global variables - these variables exist in any functions in this program. It is not encourage to do this because its hard to determine 
int i = 10;

/*user function*/
void function_1(int i){
    i=1;//this variable only exist in this function
}

void function_2(){
    i=2;//this variable uses global variable since there is not similar variable declared in this function   
}

int function_3(int i){
    i=3;//this variable only exist in this function
    return i;//the value of this is return back to the function is was called
}

/*Main function*/
int main(){
    /*Statements*/
    int i = 0;

    function_1(i);
    function_2();
    i = function_3(i);//variable i in main function will have a new value since there is assignment made. 
    //Try to remove and see if there is change of variable 1 value in the main function
    return 0;
}