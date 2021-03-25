/* Define variable "a", define a pointer to it, assign it the address of the variable. 
Use the pointer to set a new value = 5 to the variable "a". What is the value of "a"? */

#include <stdio.h>

int main(void){
    int a = 0;
    int *pointer = &a;
    *pointer = 5;
    printf("%d\n", a);
    
    return 0;
}

/* Prints 5, because we have changed the value of 'a' using the pointer */
