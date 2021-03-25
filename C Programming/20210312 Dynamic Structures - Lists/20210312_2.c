/* A simple example of using an array: Implementation of the classical sieve algorithm 
of Eratosthenes (III century BC) to find all prime numbers in the range from 0 to n: */

#include <stdio.h>
#define n 100

int main(void){
    int i, j, a[n];
    for (i=2; i<n; i++) a[i]=1;
    for (i=2; i<n; i++)
        if (a[i])
            for (j=i; i*j<n; j++) a[i*j]=0;
    printf("1 ");
    for (i=2; i<n; i++)
        if (a[i]) printf("%d ",i);
    return 0;
}

/* Prints 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97  */
