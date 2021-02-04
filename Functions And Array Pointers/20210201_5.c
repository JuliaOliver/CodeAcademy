/* Recursive function */

#include <stdio.h>

int RecursiveFun(int nA, int nB);

int main(){
    int nA = 5, nB = 7;
    printf("RecursiveFun: %d\n", RecursiveFun(nA, nB));
}

int RecursiveFun(int nA, int nB){
    int nValue = 1;
    if (nA > 1 && nB > 1) {
    nValue += RecursiveFun(nA - 1, nB - 1); /* sums the numbers until both are greater than 1*/
    } 
    return (nA + nB + nValue);
}

/* Prints RecursiveFun: 45 */
