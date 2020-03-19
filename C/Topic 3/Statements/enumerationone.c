/************************************************************************************************************************
 * This program is design to understand the following:                                                                  *
 * 1) The purpose and how to use enumeration                                                                            *
 * **********************************************************************************************************************/
/*Directives*/
//no library is required as we will be using debugging tool to understand How the code is being execueted

/*Main function*/
int main(){
    /*Statements*/

    enum suit{diamonds=1, clubs=2, hearts=3, spades=4} cards; //declare a data type suit and vriable name cards
    for(int loop=diamonds; loop < spades; ){
        loop++;
    }

    return 0;
}
/************************************************************************************************************************
 * Summary on example                                                                                                   *
 * 1)   C treats enumeration variables and constant as integers.                                                        *
 * 2)   Enumeration is used when we nee variables that only have a small set of meaningful meaning                      *
 * 3)   Enumeration values can be listed by the programmer as the above example that diamonds = 1 and so on             *
 * 4)   Although enumaration is similar to #define but enumeration are sunjected to scope                               *
 ************************************************************************************************************************/