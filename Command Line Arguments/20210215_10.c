/* How it works? We define variable "a", we define a pointer, but we don't set a value yet. 
Print the address of "a". Then we assign a value to the pointer, making sure that the types 
of the pointer and the variable are of the same type. We print on the screen the value of 
the pointer with %p, the value of "a" with %d, the value of *ptr with %d. */

#include <stdio.h>

int main(void){
    int a = 5;
    int *pointer;
    printf("Address of a %p\n", &a);

    pointer = &a;

    printf("Address of pointer %p\nValue of a = %d\nValue of pointer = %d", pointer, a, *pointer);

    return 0;
}

/* Prints Address of a 000000000061FE14
          Address of pointer 000000000061FE14
          Value of a = 5
          Value of pointer = 5 */
