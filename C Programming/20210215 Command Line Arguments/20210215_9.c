/* Define and initialize variable "a".
Pointer to pointer to variable.
Define and initialize a pointer to it.
Define and initialize a pointer to the first pointer. Set the value of the second pointer 15.
What is the value of the variable "a"? */

#include <stdio.h>

int main(void){
    int a = 5;
    int *firstPointer = &a;
    int **secondPointer = &firstPointer;
    **secondPointer = 15;

    printf("Address of first pointer %p, first pointer = %d\n", &firstPointer, *firstPointer);
    printf("Address of second pointer %p, second pointer = %d\n", &secondPointer, **secondPointer);
    printf("Address of a %p, a = %d\n", &a, a);

    return 0;
}

/* Prints Address of first pointer 000000000061FE10, first pointer = 15
          Address of second pointer 000000000061FE08, second pointer = 15
          Address of a 000000000061FE1C, a = 15 */
