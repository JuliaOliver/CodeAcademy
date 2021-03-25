/* Let's put the code from file 20210217_8.c into function */

#include <stdio.h>

void fibonacci(int end);

int main(void){       
    int num;
    printf("Enter a number to do the Fibonacci sequence: ");
    scanf(" %d", &num);

    fibonacci(num);
    
    return 0;
}

void fibonacci(int end){
    int fibonacciArray[10];
    fibonacciArray[0] = 0;
    fibonacciArray[1] = 1;
    int i;

    for(i = 2; i < end; i++)
            fibonacciArray[i] = fibonacciArray[i-1] + fibonacciArray[i-2];

    for (i = 0; i < end; i++)
            printf("Fibonacci [%1d] | %d\n", i, fibonacciArray[i]);
}

/* Depending the entered input, prints the corresponding answer */
