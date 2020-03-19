/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) The purpose structure                                                                                             *
 * 2) How to access and modify structure members value                                                                  *
 * 3) Create nested structures and array of strutures                                                                   *
 * **********************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/

    //This is a simple way to declare a struct
    struct trainee_performance{//declare a data struct name trainee_details which cointains datas such as score and grade 
        int score;
        char grade;
    };
    struct trainee_performance trainee1a = {75,'B'};
    //declare a variable name trainee1 which is struct data type and contains datas in the trainee_details struct
    
    /*
     *Line 15 to 19 can be also written as below
     *struct trainee_details{//declare a data struct name trainee_details which cointains datas such as score and grade 
     *    int score;
     *    char grade;
     *}trainee1 = {75,'B'};
    */

    int data_size = sizeof(trainee1a); //data size contains the size of trainee_details
    data_size = sizeof(trainee1a.score); //data size contains the size of trainee_details
    data_size = sizeof(trainee1a.grade); //data size contains the size of trainee_details
    //If you notice there is a extra 3 byte of space? This is known as stucture padding 
    //for more info visit: https://riptutorial.com/c/example/32122/structure-padding

    //accessing the data in trainee1
    trainee1a.score = 90;
    trainee1a.grade = 'A';

    /*NOTE: structure is a great way to organize your data. Its a great way to give variables a meaning label such that *
     *      it is easy for anyone to maintain the program besides the original authoer of the program.                  */
    /*------------------------------------------------------------------------------------------------------------------*/

    //Next, create a struct of arrays
    struct trainee_name{
        char firstname[10];
        char lastname[10];
    };
    struct trainee_name trainee1b={"Barney","Chingu"};

    data_size = sizeof(trainee1b); //data size contains the size of trainee_details
    data_size = sizeof(trainee1b.firstname); //data size contains the size of trainee_details
    data_size = sizeof(trainee1b.lastname); //data size contains the size of trainee_details
    
    char *change_firstname = "Amy";
    //As mentioned earlier, There is a another way to change the string data using strcpy() function by include the 
    //string.h which will be mentioned later.
    for(int loop = 0; *(trainee1b.firstname + loop) != '\0'; loop++){
        *(trainee1b.firstname + loop) = *(change_firstname + loop);
    }

    /*NOTE: We have learn that structure data can also contain arrays. However, is there anyway we can make the above   *
     *      structure combine into one to make it more meaningful data structure. The answer is YES! see below code     */
    /*------------------------------------------------------------------------------------------------------------------*/
    //Create a nested structure using the above examples
    struct trainee_details{
        struct trainee_name;
        struct trainee_performance;
    };
    struct trainee_details trainee1 = {"Carlos","Santoz", 78, 'B'};
    
    data_size = sizeof(trainee1); //data size contains the size of trainee_details
    data_size = sizeof(trainee1.firstname); //data size contains the size of trainee_details
    data_size = sizeof(trainee1.lastname); //data size contains the size of trainee_details
    data_size = sizeof(trainee1.score); //data size contains the size of trainee_details
    data_size = sizeof(trainee1.grade); //data size contains the size of trainee_details

    //Changing the value of structure
    trainee1.score = 90;
    trainee1.grade = 'A';
    /*NOTE: We have learn that structure data can also contain structures as well! Still, can the data be better        *
     *      organize? The answer is YES OF COURSE! next we will learnt to create an array of structures!                */
    /*------------------------------------------------------------------------------------------------------------------*/

    struct trainee_details trainees[2] = { {"Jen","Angel",60,'C'} , {"John","Pi",86,'A'} };

    //Lets change the value of one of the element of the array
    trainees[0].score = 70;
    trainees[1].score = 80;
    trainees->grade = 'B';//notice the use of -> operator to access members for array of structures?
    (trainees+1)->grade = 'B';//for more into visit: http://www.c4learn.com/c-programming/c-arrow-operator/

    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   As mentioned earlier, struture makes the program easy to read. It gives an organize way to access data which    *
 *      if the data has many components. For example, a human have a name, physical attributes, address and performance.*
 * 2)   Struture makes program easy to modify. Unlike topics we handle earlier. Structures are forms of data storage BUT*
 *      these data do not store; to store these data you need to store them in file which we will discuss later on      *
 * 3)   IF you understood the usage of structures, it is easy to grasp the idea of object oriented programming (OOP)    *
 ************************************************************************************************************************/