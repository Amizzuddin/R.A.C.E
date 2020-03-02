/**********************************************************************************************************************************************************
 * This program is design to understand the following:                                                                                                    *
 * 1) The purpose of switch statment.                                                                                                                 *
 * 2) the difference of ternary operator vs switch statement                                                                                          *
 * 3) How does a nested switch statement look like                                                                                                    *
 * ********************************************************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/
    
    int trainee_score = 50;
    char trainee_grade = '\0';
    //Line 18 to 35 are statements to give grade based on their score
    switch(trainee_score/10){
        case 10: trainee_grade = 'A';
        case  9: trainee_grade = 'A';
        case  8: trainee_grade = 'B';
        case  7: trainee_grade = 'B';
        case  6: trainee_grade = 'C';
        case  5: trainee_grade = 'C';
        case  4: trainee_grade = 'D';
        case  3: trainee_grade = 'E';
        default: trainee_grade = 'F';
    }

    trainee_score = 65;
    trainee_grade = '\0';
    //Line 41 to 46 are similar as the above statements but using the ternary operator
    trainee_grade = ( trainee_score <= 100 && trainee_score > 80 ) ? 'A' : trainee_grade;
    trainee_grade = ( trainee_score <= 80 && trainee_score > 60 ) ? 'B' : trainee_grade;
    trainee_grade = ( trainee_score <= 60 && trainee_score >= 50 ) ? 'C' : trainee_grade;
    trainee_grade = ( trainee_score < 50 && trainee_score >= 40 ) ? 'D' : trainee_grade;
    trainee_grade = ( trainee_score < 40 && trainee_score >= 30 ) ? 'E' : trainee_grade;
    trainee_grade = ( trainee_score > 100 && trainee_score < 30 ) ? 'F' : trainee_grade;

    trainee_score = 55;
    trainee_grade = '\0';
    //Line 41 to 46 are similar as the above statements but using the nested if... else statement
    switch (trainee_score/10){
        case 10: trainee_grade = 'A';
        case  9: trainee_grade = 'A';
        case  8: 
        {
            switch(trainee_score%10){
                case 0: trainee_grade = 'B';
                default: trainee_grade = 'A';
            }
        }
        case  7: trainee_grade = 'B';
        case  6: trainee_grade = 'B';
        {
            switch(trainee_score%10){
                case 0: trainee_grade = 'C';
                default: trainee_grade = 'B';
            }
        }
        case  5: trainee_grade = 'C';
        case  4: trainee_grade = 'D';
        case  3: trainee_grade = 'E';
        default: trainee_grade = 'F';
    }

    return 0;
}
/*************************************************************************************************************************************
 * Summary on example 2                                                                                                              *
 * 1)   Notice that the conditional statement for switch case requires a constant value? Switch do not accept ranging values.
 * 2)   Even though the condition met, switch case will still execute the remaining cases.  This problem can be overcome later
 *      when we touch on jump statement                               * 
 * 3)   if you require precision, it is required to apply nested switch statements
 *************************************************************************************************************************************/