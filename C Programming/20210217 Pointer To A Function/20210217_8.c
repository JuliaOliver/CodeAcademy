/* Write a program to represent the Fibonacci sequence in an array. */

#include <stdio.h>

int main(void){       
    int fibonacciArray[10];
    int fibonacciEnd = 10; 
    int i;

    fibonacciArray[0] = 0;
    fibonacciArray[1] = 1;

    for(i = 2; i < fibonacciEnd; i++)
            fibonacciArray[i] = fibonacciArray[i-1] + fibonacciArray[i-2];

    for (i = 0; i < fibonacciEnd; i++)
            printf("Fibonacci [%1d] | %d\n", i, fibonacciArray[i]);
    
    return 0;
}

/* Prints Fibonacci [0] | 0
          Fibonacci [1] | 1
          Fibonacci [2] | 1
          Fibonacci [3] | 2
          Fibonacci [4] | 3
          Fibonacci [5] | 5
          Fibonacci [6] | 8
          Fibonacci [7] | 13
          Fibonacci [8] | 21
          Fibonacci [9] | 34 */
