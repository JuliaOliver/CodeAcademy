/* Write the prototypes of the functions int add (int a, int b) and int incr (int c) 
in the file f.h, the bodies of the functions in the file f.c. and use these functions 
in the m.c file, where the body of the main () function is written. Compile the program. */

#include <stdio.h>
#include "functions_prototypes.h"

int main(){
    int a, b, c;
    printf("Enter a number:\na = ");
    scanf("%i", &a);

    printf("Enter a number:\nb = ");
    scanf("%i", &b);

    printf("Enter a number:\nc = ");
    scanf("%i", &c);

    printf("\n%d + %d = %d\n", a, b, add(a, b));
    printf("Incremented c = %d\n", increment(c));

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
