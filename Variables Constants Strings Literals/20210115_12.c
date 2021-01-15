/* If we have a character string char str [] = “Hello”, replace the letters l 
with x on the same character string and print the result on the console. */

#include <stdio.h>

int main(void){
    char str [] = "Hello";

    str[2] = 'x';
    str[3] = 'x';

    printf("%s", str); 

    return 0;
}

/* Prints Hexxo */
