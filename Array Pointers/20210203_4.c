/* Write the function int binarySearch (int a [], int n, int x), which gets as the first argument 
the beginning of the array a, the second argument is the length of the array, and the third argument 
is the number we are looking for. We know that the array in which we will look for the element is pre-arranged. 
We compare the searched element with the element in the middle of the array. If it is bigger 
than the one in the middle we look for the element from the middle to the end, if it is smaller 
we look for it in the part from the beginning to the middle. This is repeated until the array element 
is equal to the searched. Then we return the position of the number in the array or -1 if it is not contained in the array. */

#include <stdio.h>

int linSearch(int array[], int length, int number);

int main(void){
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int length = 10;
    int number = 17;

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
    int halfLength = length / 2;
    int i;

    if (array[halfLength] == number){
        return halfLength;
    }

    else if (array[halfLength] > number){
        for (i = 0; i <= halfLength; i++){
            if (array[i] == number){
                return i;
            }
        }
    }

    else if (array[halfLength] < number){
        for (i = halfLength; i < length; i++){
            if (array[i] == number){
                return i;
            }
        }
    }
    return -1;
}

/* Prints the match position, if any */
