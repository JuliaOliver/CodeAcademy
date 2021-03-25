/* Write a function that calculates the product of the numbers 1 to 30. */


#include <stdio.h>
#include <math.h>

double Factorial(double number);

int main(void){
    double num = 30;
    Factorial(num);

    return 0;
}

double Factorial(double number) {
    double result = 1;
    double i = 1;
    double fraction;
    int e;
    for(i; i <= number; i++){
        result *= i;
    }
    fraction = frexp(result, &e);
    printf("The product of the numbers from 1 to 30 (inclusive) is approximately equal to %.2lf * 2^%d\n", fraction, e);
}

/* Prints 
The product of the numbers from 1 to 30 (inclusive) is approximately equal to 0.82 * 2^108 */
