/* Write a macro with a variable number of parameters that calls printf with the prefix "TRACE:" */

#include <stdio.h>

#define MY_PRINT(...) printf("TRACE: " __VA_ARGS__)

int main(void){
    MY_PRINT("My favourite numbers is %d and my favourite colour is %s!\n", 3, "purple");
    return 0;
}

/* Prints TRACE: My favourite numbers is 3 and my favourite colour is purple! */
