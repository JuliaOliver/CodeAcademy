/* Create an infinite for loop (;;) and print the numberthat increases 
by one in each loop. When the number reaches 48, exit the loop with a break. */

#include <stdio.h>

int main(void){

    int number = 0;

    for(;;){
        number++;
        if (number == 48) break;
        printf("%d\n", number);
    }

    return 0;
}

/* Prints all the numbers from 1 to 47 inclusive */ 
