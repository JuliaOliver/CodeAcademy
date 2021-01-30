#include <stdio.h>

int multiply(int a, int b){
    int multiplication;
    multiplication = a * b;
    printf("\n%d * %d = %d\n", a, b, multiplication);
}

int increment(int a, int b){
    a += 1;
    b += 1;
    printf("\nIncremented a = %d\nIncremented b = %d\n", a, b);
    multiply(a, b);
}

int add(int a, int b){
    int addition;
    addition = a + b;
    printf("\n%d + %d = %d\n", a, b, addition);
    increment(a, b);
}
