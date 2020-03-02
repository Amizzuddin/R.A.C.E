/**********************************************************************************************************************************************************
 * This program is design to understand the following:                                                                                                    *
 * 1) The purpose of if... else statment.                                                                                                                 *
 * 2) the difference of ternary operator vs if... else statement                                                                                          *
 * 3) How does a nested if... else statement look like                                                                                                    *
 * ********************************************************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/
    
    int trainee_score = 50;
    char trainee_grade = '\0';
    //Line 18 to 35 are statements to give grade based on their score
    if ( trainee_score <= 100 && trainee_score > 80 ){
        trainee_grade = 'A';
    }
    else if ( trainee_score <= 80 && trainee_score > 60 ){
        trainee_grade = 'B';
    }
    else if ( trainee_score <= 60 && trainee_score >= 50 ){
        trainee_grade = 'C';
    }
    else if ( trainee_score < 50 && trainee_score >= 40 ){
        trainee_grade = 'D';
    }
    else if ( trainee_score < 40 && trainee_score >= 30 ){
        trainee_grade = 'E';
    }
    else{
        trainee_grade = 'F';
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
    if ( trainee_score <= 100 && trainee_score >= 30 ){
        if ( trainee_score <= 100 && trainee_score > 80 ){
            trainee_grade = 'A';
        }
        else if ( trainee_score <= 80 && trainee_score > 60 ){
            trainee_grade = 'B';
        }
        else if ( trainee_score <= 60 && trainee_score >= 50 ){
            trainee_grade = 'C';
        }
        else if ( trainee_score < 50 && trainee_score >= 40 ){
            trainee_grade = 'D';
        }
        else{
        trainee_grade = 'E';
        }
    }
    else{
        trainee_grade = 'F';
    }

    return 0;
}
/*************************************************************************************************************************************
 * Summary on example 1                                                                                                              *
 * 1)   Notice that the conditional statement are written differently based on what type of conditional statement or operator used   *
 * 2)   Imagine if we try to nested ternary operator, it will be very hard to understand the code.                                   * 
 * 3)   The execution of the program will exit the if... else statement once condition met.                                          *
 *      This is not true for the ternary operator, the program will execuete every line regardless the condition met of not.         *
 *************************************************************************************************************************************/