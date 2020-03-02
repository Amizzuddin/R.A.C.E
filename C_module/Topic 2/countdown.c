#include<stdio.h>//a library to interface keyboard(for input) and display(for output)
//for more info visit: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm 

int main(){
    int loop;
    printf("Racer.....! Start your engine!\n"); //prints start of program the terminal

    for(loop=5; loop > 0; loop--){
       printf("%d!\n", loop); //prints value of loop on the terminal
    }
    
    printf("Go!!!!"); //prints end of program the terminal
    return 0;
}
