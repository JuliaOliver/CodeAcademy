/* Define an int array with 10 elements. Define a pointer that will point to an array. 
Aim the pointer at the array. Do you need to use &? What is an array name? What does it indicate? 
How many ways are there to write the direction of the pointer to the array. Is there a difference between them? */

#include <stdio.h>

int main(void){
    int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *pointer = NULL;
    pointer = array; /* possible syntax: pointer = &array[0]; */


    return 0;
}

/* Do you need to use &? - No, there is possible syntax without & - pointer = array; - 
both lead to the address of the first element (value) of the array.
What is an array name? What does it indicate? - It indicates the first element (value) of the array.
How many ways are there to write the direction of the pointer to the array. Is there a difference between them?
pointer = array; and pointer = &aray[0]; - both are equal */
