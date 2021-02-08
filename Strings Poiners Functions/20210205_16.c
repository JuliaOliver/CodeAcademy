/* Write a program to multiply two one-dimensional arrays, 
element by element. Display the output array on the screen. */

#include <stdio.h>

int main(){
    int n = 3;
    int firstArray[3] = {1, 2, 3};
    int secondArray[3] = {4, 5, 6};
    int resultarray[3] = {};

    for(int i = 0; i < n; i++){
        resultarray[i] = firstArray[i] * secondArray[i];
    }
    
    for (int i = 0; i < n; i++){
            printf("Result Array [%d] : %d\n", i, resultarray[i]);
        }

    return 0;
}

/* Prints Result Array [0] : 4
          Result Array [1] : 10
          Result Array [2] : 18 */
