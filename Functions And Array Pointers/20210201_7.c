/* Write a recursive function that calculates the product of the numbers 1 to 30. */

#include <stdio.h>
#include <math.h>

double Factorial(double number);

int main(void){
    double result;
    double i = 1;
    double fraction;
    int e;
    double num = 30;
    result = Factorial(num);
    fraction = frexp(result, &e);
    printf("The product of the numbers from 1 to 30 (inclusive) is approximately equal to %.2lf * 2^%d\n", fraction, e);

    return 0;
}

double Factorial(double number) {
    if (number < 2) {
        return 1;
    } 
    else {
        return number * Factorial(number - 1);
    }
}

/* Prints 
The product of the numbers from 1 to 30 (inclusive) is approximately equal to 0.82 * 2^108 */
