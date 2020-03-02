/***********************************************************************************************************************
 * This program is design to understand the following:                                                                 *
 * 1) The purpose array variables.                                                                                     *
 * 2) How to access array elements                                                                                     *
 * 3) The array of char which is known as string
 * *********************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/
    int trainee_score[5] = {30, 50, 75, 95, 63}; //There is 5 variables with data type int which each has been initialized
    char trainee_grade[5] = {'\0'}; //There is 5 variables with data type int which each has been initialized with '\0'
    int array_size = sizeof(trainee_score)/sizeof(trainee_score[0]); //to find out the size of array
    for(int trainee_register=0; trainee_register < 5; trainee_register++){
        switch(trainee_score[trainee_register]/10){
            case 10: case 9: case 8:  trainee_grade[trainee_register] = 'A'; break;
            case 7: case 6: trainee_grade[trainee_register] = 'B'; break;
            case 5: trainee_grade[trainee_register] = 'C'; break;
            case 4: trainee_grade[trainee_register] = 'D'; break;
            case 3: trainee_grade[trainee_register] = 'E'; break;
            default: trainee_grade[trainee_register] = 'F'; break;
        }
        if(trainee_score[trainee_register]/10 == 8 || trainee_score[trainee_register]/10 == 6){
            if(trainee_score[trainee_register]%10 == 0){
                trainee_grade[trainee_register]++;
            }
        }
    }
    //Take note another way to access array element using array name as pointer
    for(int loop = 0; loop < array_size; loop++){
        *(trainee_grade+loop) = '\0';//resets array to initial value
        //NOTE: there is another way to reset char array but require the use of library
    }

    //this for loop performs swapping of datas within array space
    for(int start = 0, end = array_size - 1, temp; start < end; start++, end--){
        temp = *(trainee_score + start);
        *(trainee_score + start) = *(trainee_score + end);
        *(trainee_score + end) = temp;
    }
    /*NOTE: Array is an organize way to store your datas. However, these data store as an array must have the same      *
     *      data representation. In this example, these data only contains scores or grades. Avoid usage of array which *
     *      contains multiple representation. Example: int array[3] = {student score, student register, student height} *
     *      This makes others hard to understand. IF you have such data, we can use other data sturucture! Notice that  *
     *      this code can be quite confusing to understand? This is where pointer comes very useful!                    *
     *------------------------------------------------------------------------------------------------------------------*/

    char string[] = "Race Academy"; //Realize the difference when initializing a char('') and a string of char("")?
    //Note must note that this array contains this data -> {R,a,c,e, ,A,c,a,d,e,m,y,\0}. The null character is included
    //as it serves the end of the string. It is something like human language fullstop '.' but for computer to understand.
    int string_size = sizeof(string)/sizeof(string[0]);

    //using the code earlier to make a palindrome!
    for(int start = 0, end = string_size - 2, temp; start < end; start++, end--){
        temp = *(string + start);
        *(string + start) = *(string + end);
        *(string + end) = temp;
    }

    //You can change the modify string with the following
    char *change_string = "RACE Singapore"; //*change_string is a pointer to string
    for(int loop = 0; *(change_string + loop) != '\0'; loop++){
        *(string + loop) = *(change_string + loop);
    }
    /*NOTE: As observed, It is possible to change/modify a string value. However, the length of string to modify must   *
     *      match with the length of the array. Or else the data is lost. This is the disadvantage of using array       *
     *      that the length is not defined.                                                                             *
     *------------------------------------------------------------------------------------------------------------------*/
}
/***********************************************************************************************************************
 * Summary on example                                                                                                  *
 * 1)   As mentioned earlier, data represents in an array must have one significant meaning. DO NOT MIXED data meaning *
 *      in an array as it can be very confusing.                                                                       *
 * 2)   In This example, we deal with 1 dimension array. It is possible to create 2 or even more dimension array.      *
 * 3)   IF you note, To reset the value of an array requires to access each element in an array. The alternative method*
 *      the use of function memset() found in string.h which you will come accross this function later.                *
 * 4)   if you notice the string array here space wasn't defined. in this program, string was declared as char string[]*
 *      program is smart enough to tell the size required once you enter the data. However, do not this is not         *
 *      advisable if you are taking data from user.                                                                    * 
 ***********************************************************************************************************************/