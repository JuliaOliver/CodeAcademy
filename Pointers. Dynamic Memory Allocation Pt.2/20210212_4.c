/* Memory allocation and release - malloc, free. 
Allocate memory dynamically to an array and fill the elements. */

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
    
    if(NULL == pointer){
        printf("Allocation memory error!\n");
        exit(1);
    }

    printf("Address of summary: %p, Pointer: %p\n", &summary, pointer);
    printf("Elements after memory allocation: %u \n", index);

    for(index = 0; index < numOfElements; index++){
        printf("%p, ", (pointer + index));
    }

    for(index = 0; index < numOfElements; index++){
        printf("\nEnter %d element: ", index);
        scanf("%d", pointer + index);
        summary += *(pointer + index);
    }

    printf("Sum of elements = %d\n", summary);

    free(pointer);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
