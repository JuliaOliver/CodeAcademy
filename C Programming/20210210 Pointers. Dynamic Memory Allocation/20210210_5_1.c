/* Rewrite the function to sum the elements of an array using pointer arithmetic instead of the incrementing variable i */

#include <stdio.h>

int sumArray(int a[]);

int main(void){
    int array[11] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};

    int summary = sumArray(array);
    printf("Sum = %d", summary);
}

int sumArray(int a[]){
    int *pointer = a;
    int sum = 0;
    for (pointer; *pointer; pointer++){
        sum += *pointer;
    }
    return sum;
}

/* Prints Sum = 395 */
