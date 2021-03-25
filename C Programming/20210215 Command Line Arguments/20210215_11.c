/* Write a program that multiplies 2 numbers using pointers.
Continuation: Try to multiply 2 variables of different types using pointers. */

#include <stdio.h>

int main(void){
    int a = 5;
    int b = 3;
    float x = 3.5;

    int *pointerA = NULL;
    int *pointerB = NULL;
    float *pointerX = NULL;

    pointerA = &a;
    pointerB = &b;
    pointerX = &x;

    int multiplication;
    multiplication = *pointerA * *pointerB;
    printf("a * b = %d\n", multiplication);

    
    float floatMultiplication;
    floatMultiplication = *pointerA * *pointerX;
    printf("a * x = %d", floatMultiplication);
}

/* Prints a * b = 15
          a * x = 0 */
