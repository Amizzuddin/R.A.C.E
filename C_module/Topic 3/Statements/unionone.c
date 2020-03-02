/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) The purpose unions                                                                                             *
 * 2) How to access and modify unions members value                                                                  *
 * **********************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/

    //This is a simple way to declare a union
    union trainee_performance{//declare a data union name trainee_performance which contains datas such as score and grade 
        int score;
        char grade;
    }trainee1a = {0};//can only initiliaze on member at a time

    int data_size = sizeof(trainee1a); //data size contains the size of trainee_details
    data_size = sizeof(trainee1a.score); //data size contains the size of trainee_details
    data_size = sizeof(trainee1a.grade); //data size contains the size of trainee_details
    //If you notice there is a extra 3 byte of space? This is known as stucture padding 
    //for more info visit: https://riptutorial.com/c/example/32122/structure-padding

    //accessing the data in trainee1-observe the difference between union and structure here!
    trainee1a.score = 90;
    trainee1a.grade = 'A';

    /*NOTE: Have you notice that there is an overwrite of values? In other words, Unions can store one data at a time   *
     *      However, what makes union better than sturucture is that it can save space. the largest value it can hold   *
     *      is based on the largest member of union. You can treat as union as data types that have multiple types.     */
    /*------------------------------------------------------------------------------------------------------------------*/

    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   Union have the same characteristic as strutures. However, union can hold one value at one time.                 *
 * 2)   Accessing data from a union will be exactly the same as how you access members of a structure                   *
 * 3)   Union is like a variable but have multiple types. In addition, it save space! this is useful when you are       *
 *      dealing system which have limited spaces such as arduino.                                                       *
 * 3)   IF you understood the usage of union, it is easy to grasp the idea of object oriented programming (OOP)         *
 ************************************************************************************************************************/