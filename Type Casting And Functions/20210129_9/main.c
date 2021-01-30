/* Write three functions that make a calculation of your choice and are called as follows:
Main calls F1;
F1 calls F2;
F2 calls F3;
Export their prototypes to a separate .h file. */

#include <stdio.h>
#include "functions_prototypes.h"

int main(){
    int a, b;
    printf("Enter a number:\na = ");
    scanf("%i", &a);

    printf("Enter a number:\nb = ");
    scanf("%i", &b);

    add(a, b);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
