/* Write a program that finds the length of a string with a pointer! (without using length ()); */

#include <stdio.h>

int main(void){
    char *string = "Hello World!";
    int length = 0;
    char *pointer = string;

    for(pointer; *pointer; pointer++){
        length += 1;
    }

    printf("The length of the string is %d", length);

    return 0;
}

/* Prints The length of the string is 12 */
