/***********************************************************************************************************************
 * This program is design to understand the following:                                                                 *
 * 1) The purpose of continue, break, goto statment.                                                                   *
 * 2) the difference between these jump statement                                                                      *
 * *********************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/
    /*The continue(line 15), break(line 20) and goto(line26) statement and improve on selectiontwo*/
    int trainee_score = 20;
    char trainee_grade = '\0';

    while(trainee_grade == '\0'){
        switch(trainee_score/10){
            case 10: trainee_grade = 'A'; continue;
            case  9: trainee_grade = 'A'; continue;
            case  8: goto secondcheck;
            case  7: trainee_grade = 'B'; continue;
            case  6: goto secondcheck;
            case  5: trainee_grade = 'C'; continue;
            case  4: trainee_grade = 'D'; continue;
            case  3: trainee_grade = 'E'; continue;
            default: trainee_grade = 'F'; continue;
        }
        secondcheck: //This is the label of the goto statment.
        trainee_grade = (trainee_score >= 8) ? 'A' : 'B';
        trainee_grade = (trainee_score%10 > 0) ? trainee_grade: trainee_grade+1;
    }
    trainee_grade = '\0';   //reset to initial value
    /*NOTE: The label statement will still be executed even without using the goto statement. You can try this by      *
     *      removing the continue stament at the end of each case to see the difference. Notice when continue statement*
     *      Is executed, the program will be directed to the loop control expression.                                  */

    /*-----------------------------------------------------------------------------------------------------------------*/
    while(1){ //this is an infinite loop
        switch(trainee_score/10){
            case 10: trainee_grade = 'A'; break;
            case  9: trainee_grade = 'A'; break;
            case  8: trainee_grade = 'A'; break;
            case  7: trainee_grade = 'B'; break;
            case  6: trainee_grade = 'B'; break;
            case  5: trainee_grade = 'C'; break;
            case  4: trainee_grade = 'D'; break;
            case  3: trainee_grade = 'E'; break;
            default: trainee_grade = 'F'; break;
        }
        if(trainee_grade != '\0'){
            break;
        }
    }
    if(trainee_score/10 == 8 || trainee_score/10 == 6){
        if(trainee_score%10 == 0){
            trainee_grade++;
        }
    }
    /*NOTE: The break statement will direct the program out of the body loop its in. if you notice that another        *
     *      break statement is required to exit out from the infinite loop.                                            */

    return 0;
}
/***********************************************************************************************************************
 * Summary on example 1                                                                                                *
 * 1)   It is advice not to use the goto statement as it can be very complex to debug a program.                       *
 * 2)   However, it is encourage to use the break or continue statment when required. This example is design to observe*
 *      effective use of these statement.                                                                              * 
 ***********************************************************************************************************************/