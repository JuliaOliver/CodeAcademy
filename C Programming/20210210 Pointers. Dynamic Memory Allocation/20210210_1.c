/* Write a program that sums all the elements of an array in an even position: 
int arr [10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33}; Declare a pointer to the 
first even position, increment the pointer appropriately to perform the summation. */

#include <stdio.h>

int main(void){
    int array[11] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *pointer = array;
    int summary = 0;

    for (pointer; *pointer; pointer += 2){
        summary += *pointer;
    }

    printf("Even sum = %d", summary);
}

/* Prints Even sum = 157 */
