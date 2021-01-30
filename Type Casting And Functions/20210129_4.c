/* Write a function that returns the result a * 2 + b * c */

#include <stdio.h>

float calculation(float a, float b, float c);

int main(){
    float a, b, c;
    printf("Please enter a number\na = ");
    scanf("%f", &a);
    printf("Please enter a number\nb = ");
    scanf("%f", &b);
    printf("Please enter a number\nc = ");
    scanf("%f", &c);
    
    float result = calculation(a, b, c);
    printf("%.2f * 2.00 + %.2f * %.2f = %.2f", a, b, c, result);

    return 0;
}

float calculation(float a, float b, float c){
    float res;
    res = a * 2 + b * c;
    return res;
}

/* Depending the entered numbers for 'a', 'b' and 'c', prints the result from the calculation function */
