/* Symbolic input and output */

#include <stdio.h>

int main(void){
    char c;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    return 0;
}

/* With the function getchar() the program takes the input,
and then prints it with the putchar() function. */
