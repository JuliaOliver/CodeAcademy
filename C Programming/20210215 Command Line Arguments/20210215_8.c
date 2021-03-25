/* Define and initialize a variable and a pointer to it. 
Print the pointer address with %p with printf. */

#include <stdio.h>

int main(void){
    int variable = 10;
    int *pointer = &variable;

    printf("%p", pointer);

    return 0;
}

/* Prints 000000000061FE14 */
