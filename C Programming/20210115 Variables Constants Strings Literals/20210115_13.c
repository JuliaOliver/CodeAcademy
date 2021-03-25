/* If we have a string char str [] = “HELLO”, replace all 
uppercase characters with the corresponding lowercase characters. */

#include <stdio.h>

int main(void){
    char str [] = "Hello";

    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';

    printf("%s", str); 

    return 0;
}

/* Prints hello */
