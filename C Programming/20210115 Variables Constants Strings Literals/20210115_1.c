/* Definition and declaration of a variable */

#include <stdio.h>

extern int globalVariable;

int main(void){
    printf("Global variable = %d \n", globalVariable);
    return 0;
}

int globalVariable = 150;

/* Prints Global variable = 150  */
