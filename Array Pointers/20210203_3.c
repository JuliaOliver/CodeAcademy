/* Write the function int linSearch (int a [], int l, int d), which gets as the first argument 
the beginning of the array a, the second argument is the length of the array, and the third 
argument is the number we are looking for. Search the array element by element and if any 
element matches the required number return the position at which this element is located. 
Otherwise return -1 */

#include <stdio.h>

int linSearch(int array[], int length, int number);

int main(void){
    int array[] = {1, 17, 5, 12, 9, 11, 8, 15, 7, 2}; 
    int length = 10;
    int number = 11;

    int position = linSearch(array, length, number);

    if (position >= 0){
        printf("\nMatch at position: %d\n", position);
    }
    else{
        printf("\nNo such position, zero matches!\n");
    }

    return 0;
}

int linSearch(int array[], int length, int number){
    for(int i = 0; i < length; i++){
        if(array[i] == number){
            return i;
        }
    }
    return -1;
}

/* Prints the match position, if any */
