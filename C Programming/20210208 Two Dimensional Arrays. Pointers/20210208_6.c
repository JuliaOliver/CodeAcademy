/* Write a function that gets a pointer to an array of numbers and returns the largest of them. */

#include <stdio.h>

int biggestOfNums(int *pointer, int size);

int main(void){
    int array[8];
    int *pointer = &array[0];
    int arraySize = 8;
    int number;
    
    for (int i = 0; i < arraySize; i++){
        printf("Enter number: ");
        scanf(" %d", &number);
        array[i] = number;
    }

    int biggestNumber = biggestOfNums(pointer, arraySize);

    printf("\nThe biggest number of the given array is %d\n\n", biggestNumber);

    return 0;
}

int biggestOfNums(int *pointer, int size){
    int biggest = 0;
    for (int i = 0; i < size; i++){
        if(pointer[i] > biggest){
            biggest = pointer[i];
        }
    }
    return biggest;
}

/* Depending the entered input, prints the corresponding answer */
