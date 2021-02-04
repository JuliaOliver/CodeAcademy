/* Write the function int printArr (int a[], int l), which receives as the first argument 
the beginning of an array of integers, and as the second its length and prints all the 
elements of the array one by one to its end. */

#include <stdio.h>

int printArr(int array[], int length);

int main(void){
    int length = 10;
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    printArr(array, length);

    return 0;
}

int printArr(int array[], int length){
    int i = 0;
    for(i; i < length; i++){
        printf("%d ", array[i]);
    }
}

/* Prints 1 3 5 7 9 11 13 15 17 19 (separated by space) */
