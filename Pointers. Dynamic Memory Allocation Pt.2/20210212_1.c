/* Create a program that allocates a dynamic array with the number of elements 
specified by the user. For each element of the array, the user is expected to 
enter an integer and then, the sum of all elements of the array is calculated. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned index = 0;
    unsigned numOfElements = 0;
    int *pointer = NULL;
    int summary = 0;

    printf("Enter a number of elements: ");
    scanf(" %d", &numOfElements);

    pointer = (int *)malloc(sizeof(unsigned)*numOfElements);

    for(index; index < numOfElements; index++){
        printf("Enter an integer: ");
        scanf(" %d", (pointer + index));
    }

    for(int i=0; i < numOfElements; i++){
        summary += *(pointer + i);
    }

    printf("Sum of numbers = %d", summary);

    free(pointer);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
