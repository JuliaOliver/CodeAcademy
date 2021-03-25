/* Define 2 arrays with 10 elements, A and B, fill them with random numbers from 0 to 20, 
multiply each of the elements A [i] * B [i] and write the result on the screen.
Variation: Modify to display an integer division result. (What check do you need to do?) */

#include <stdio.h>

int main(){
    int n = 10;
    int arrayA[10] = {7, 9, 15, 12, 8, 13, 20, 1, 3, 5};
    int arrayB[10] = {4, 8, 11, 17, 6, 19, 2, 10, 14, 16};
    int resultarray[10] = {};

    for(int i = 0; i < n; i++){
        resultarray[i] = arrayA[i] * arrayB[i];
    }
    
    for (int i = 0; i < n; i++){
            printf("Result Array [%d] : %d\n", i, resultarray[i]);
        }

    return 0;
}

/* Prints Result Array [0] : 28
          Result Array [1] : 72
          Result Array [2] : 165
          Result Array [3] : 204
          Result Array [4] : 48
          Result Array [5] : 247
          Result Array [6] : 40
          Result Array [7] : 10
          Result Array [8] : 42
          Result Array [9] : 80 */
