/* Write a program to multiply two two-dimensional arrays, element by element. */

#include <stdio.h>

int main(){
    int n = 3;
    int firstArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int secondArray[3][3] = {{7, 2, 5}, {8, 3, 9}, {1, 6, 4}};
    int resultarray[3][3] = {};

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        resultarray[i][j] = firstArray[i][j] * secondArray[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Result Array [%d] [%d] : %d\n", i, j, resultarray[i][j]);
        }
    }

    return 0;
}

/* Prints Result Array [0] [0] : 7
          Result Array [0] [1] : 4
          Result Array [0] [2] : 15
          Result Array [1] [0] : 32
          Result Array [1] [1] : 15
          Result Array [1] [2] : 54
          Result Array [2] [0] : 7
          Result Array [2] [1] : 48
          Result Array [2] [2] : 36 */
