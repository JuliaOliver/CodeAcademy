/* Write a function that returns a result (a + c) * 4 */

#include <stdio.h>

float calculation(float a, float b);

int main(){
    float a;
    float b;
    printf("Please enter a number\na = ");
    scanf("%f", &a);
    printf("Please enter a number\nb = ");
    scanf("%f", &b);
    
    float result = calculation(a, b);
    printf("(%.2f + %.2f) * 4 = %.2f", a, b, result);

    return 0;
}

float calculation(float a, float b){
    return (a + b) * 4;
}

/* Depending the entered numbers for 'a' and 'b', prints the result from the calculation function */
