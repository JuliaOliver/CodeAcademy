/* Expand dedicated memory with realloc */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pointer = NULL;
    unsigned size = 0;

    printf("\nEnter size: ");
    scanf("%u", &size);

    pointer = (int*) malloc(size * sizeof(int));

    if(NULL == pointer){
        printf("Allocation memory error!\n");
        exit(1);
    }

    printf("Addresses of allocated memory: %p\n", pointer);
    
    printf("\nEnter the new size: ");
    scanf("%u", &size);

    pointer = realloc(pointer, size * sizeof(int));

    if(NULL == pointer){
        printf("Reallocation memory error!\n");
        exit(2);
    }

    printf("Addresses of reallocated memory: %p\n\n", pointer);

    free(pointer);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */    
