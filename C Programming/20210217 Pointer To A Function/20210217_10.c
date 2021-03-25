/* Let's find the prime numbers up to 1000 and put them in an array.
Let's write a function that tells us if a number from 0 to 1000 is simple. */

#include <stdio.h>

int isPrime(int n);
int MAXNUM = 1000;

int main(void){
    int (*functionPointer)(int);
    functionPointer = &isPrime;
    int primeNumbers[1000];
    int index = 0;

    for(int i = 0; i <= MAXNUM; i++){
        int num = (*functionPointer)(i);
        if(num > 0){
            primeNumbers[index] = num;
            index++;
        }
    }

    printf("Prime numbers between 0 and 1000:\n");
    for(int i = 0; i < index; i++){
        printf("%d\n", primeNumbers[i]);
    }

    return 0;
}

int isPrime(int n){
    int prime = 1;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    if(n <= 1){ /* The number 1 is neither prime nor composite */
        return 0;
    }
    if(prime == 1) {
        return n;
    }
}

/* Prints all the prime numbers between 0 and 1000 */
