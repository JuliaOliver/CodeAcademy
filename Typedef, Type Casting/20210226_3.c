/* Define a custom type to a pointer. Create a variable, 
point the pointer to it using the new user type. */

#include <stdio.h>

typedef int *t_customPtr;

int main(void){
    int number = 24;
    t_customPtr pointer = &number;

    printf("Number = %d, Address = %p", *pointer, &pointer);

    return 0;
}

/* Prints Number = 24, Address = 000000000061FE10 */
