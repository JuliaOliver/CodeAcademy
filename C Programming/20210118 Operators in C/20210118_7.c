/* Conditional operator (? :)
a) enter a value for nA with scanf
b) use the conditional operator to find the maximum of two numbers */

#include <stdio.h>

int main(void){
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    nA > nB ? printf("nA = %d is bigger than nB = %d\n", nA, nB) : printf("nB = %d is bigger than nA = %d\n", nB, nA);
    
    printf("Enter a number\n");
    scanf("%d", &nA);

    nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);
    
    nA > nB ? printf("nA = %d is bigger than nB = %d", nA, nB) : printf("nB = %d is smaller than nA = %d", nB, nA);

    return 0;
}

/* Prints A value is 1
          B value is 2
          nA = 1 is smaller than nB = 2
          Enter a number 
After entering a number, the program does the same operation 
with the entered number and prints the new result. */
