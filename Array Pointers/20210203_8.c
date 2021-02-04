/* Define a one-dimensional array int with 10 elements =
{100,90,80,70,60,50,40,30,20,10} Define a pointer that will point to an array.
Access the 3rd element of the array and set it to 5.
Access the 4th element and set it to 33.
Access the 5th element and reduce it by 7.
Access the 7th element and increase it by 10.
Access the 10th element and multiply it by 3.
Write it down in both possible ways and comment on one.
Print all elements of the array on the screen.. */

#include <stdio.h>

int printArr(int array[], int length);

int main(void){
    int array[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int length = 10;
    int *pointer = NULL;
    pointer = &array[0];
    /* pointer = array; */
    printf("Original array: ");
    printArr(array, length);

    pointer[3-1] = 5;   /* Using 3-1 because the third element is on index 2 etc. */
    /* array[3-1] = 5; */
    pointer[4-1] = 33;
    /* array[4-1] = 33; */
    pointer[5-1] -= 7;
    /* array[5-1] -= 7; */
    pointer[7-1] += 10;
    /* array[7-1] += 10; */
    pointer[10-1] *= 3;
    /* array[10-1] *= 3; */

    printf("Changed array: ");
    printArr(array, length);

    return 0;
}

int printArr(int array[], int length){
    int i = 0;
    for(i; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

/* Prints Original array: 100 90 80 70 60 50 40 30 20 10 
           Changed array: 100 90 5  33 53 50 50 30 20 30 */
