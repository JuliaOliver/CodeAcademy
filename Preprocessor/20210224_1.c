/* Define constants PI, E, and others using macros. Use them in the code. */

#include <stdio.h>

#define PI 3.141592653
#define E 2.718281828

int main(void){
    double result = PI * E;
    printf("PI * E = %f", result);

    return 0;
}

/* Prints PI * E = 8.539734 */
