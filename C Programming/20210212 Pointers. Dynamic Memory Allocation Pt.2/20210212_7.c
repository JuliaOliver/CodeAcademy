/* Memory allocation with calloc
Allocate dynamic memory to an array of items by calling a function that resets the allocated memory. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned index = 0;
    unsigned numOfElements = 0;
    int *pointer = NULL;
    int summary = 0;

    printf("Enter a number of elements: ");
    scanf(" %d", &numOfElements);

    pointer = (int *)calloc(numOfElements, sizeof(int));

    if(NULL == pointer){
        printf("Allocation memory error!\n");
        exit(1);
    }

    printf("Address of summary: %p, Pointer: %p\n", &summary, pointer);
    printf("Elements after contiguous allocation: \n", index);

    for(index = 0; index < numOfElements; index++){
        printf("%d, ", (pointer + index));
    }

    free(pointer);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
