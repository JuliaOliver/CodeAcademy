/* Write functions with which to implement a dynamic array 
of elements whose size can be changed during program execution */

#include <stdio.h>
#include <stdlib.h>

int *dynamicArray(unsigned size);
int *arrayResize(int *pointer, unsigned old, unsigned new);
int *arrayFill(int *pointer, unsigned size);

int main(void){
    unsigned size = 0;

    printf("\nEnter size: ");
    scanf("%u", &size);
    dynamicArray(size);

    return 0;
}

int *arrayFill(int *pointer, unsigned size){ /* function to fill the array with the given size */
    char choice;
    unsigned newSize;

    for(int i = 0; i < size; i++){
        printf("Enter an integer: ");
        scanf(" %d", (pointer + i));
    }

    if(NULL == pointer){
        printf("Allocation memory error!\n");
        exit(1);
    }

    printf("You filled the array. Do you want to resize it y/n?");
    scanf(" %c", &choice);

    if (choice == 'y'){ /* if yes, the resize function is called, and from it we come back here to supplement the array */
        printf("\nEnter size: ");
        scanf("%u", &newSize);
        arrayResize(pointer, size, newSize);
    }

    return pointer;
}

int *dynamicArray(unsigned size){
    int *pointer = (int *)malloc(sizeof(unsigned)*size);
    char choice;
    unsigned newSize;

    arrayFill(pointer, size);

    return pointer;

}

int *arrayResize(int *pointer, unsigned old, unsigned new){
    int *newPointer = realloc(pointer, new * sizeof(int));

    arrayFill(newPointer, new); /* again, calling the array filling function after resizing the array, 
                                so we can add more elements to it */

    free(pointer);

    return newPointer;
}

