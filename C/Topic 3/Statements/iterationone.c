/***********************************************************************************************************************
 * This program is design to understand the following:                                                                 *
 * 1) The purpose of while, do...while, for statment.                                                                  *
 * 2) the difference between these iteration statement                                                                 *
 * *********************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/
    int number = 1;
    
    /*The while(line 15), do...while(line 20) and for(line26) statement performs incremental for variable number*/ 
    while(number < 10){ //Notice that the program will test the conditional statement?
        number++;
    }
    number = 1; //reset to initial value

    do{ //Notice that the program will run do.. while statemet once then test for the conditional statement?
        number++;
    }while(number < 10);

    //TAKE NOTE the scope of the variable number in this for statement. 
    //Do you think its the same variable as line 12 (which has value of 10)?
    for(int number = 1; number < 10; number++){ //Notice the program test for the conditional statement?
        number++;
    }
    /*-----------------------------------------------------------------------------------------------------------------*/

    /*The nested while(line 36), do...while(line 46) and for(line55) statement performs multiplication 2x2*/
    number = 1; //reset to initial value
    int multiplier = 1;
    int result = 0;

    while(number < 3){
        while(multiplier < 3){
            result = number * multiplier;
            multiplier++;
        }
        number++;
    }
    number = multiplier = 1;    //reset to initial value
    result = 0;                 //reset to initial value

    do{
        do{
            result = number * multiplier;
            multiplier++;
        }while(multiplier < 3);
        number++;
    }while(number < 3);

    //TAKE NOTE the scope of the variables in this for statement. 
    for(int number = 1, result = 0; number < 3; number++){
        for(int multiplier=0; multiplier < 3; multiplier++){
            result = number * multiplier;
        }
    }

    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   Notice that the conditional or control loop expression use relational or logical operator?                      *
 * 2)   If you realize all these statements can perform the same task but how the task is perform differs each statement*
 * 3)   Although in the example loops will end. It is possible to create a loop statement that never ends.              *
 * 4)   Loop statement can make the program readable. Therefore, it is encourage to use loop when you need to repeatly  *
 *      perform a task.                                                                                                 *
 ************************************************************************************************************************/