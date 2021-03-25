/* Write a program to multiply two three-dimensional arrays, element by element. */

#include <stdio.h>

int main(){
    int n = 3;
    int firstArray[3][3][3] = {{{7, 2, 5}, {8, 3, 9},{1, 6, 4}}, {{4, 5, 6}, {2, 5, 7}, {9, 4, 1}}, {{7, 8, 9}, {8, 3, 9}, {8, 3, 6}}};
    int secondArray[3][3][3] = {{{8, 3, 5}, {6, 2, 7},{3, 2, 4}}, {{9, 1, 3}, {8, 5, 4}, {3, 1, 5}}, {{5, 2, 3}, {8, 6, 2}, {1, 7, 4}}};
    int thirdArray[3][3][3] = {{{4, 8, 1}, {7, 3, 5},{3, 1, 4}}, {{6, 1, 6}, {2, 3, 8}, {3, 5, 9}}, {{1, 2, 5}, {7, 4, 8}, {1, 9, 2}}};
    int resultarray[3][3][3] = {};

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                resultarray[i][j][k] = firstArray[i][j][k] * secondArray[i][j][k] * thirdArray[i][j][k];
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                printf("Result Array [%d] [%d] [%d] : %d\n", i, j, k, resultarray[i][j][k]);
            }
        }
    }

    return 0;
}

/* Prints Result Array [0] [0] [0] : 224
          Result Array [0] [0] [1] : 48
          Result Array [0] [0] [2] : 25
          Result Array [0] [1] [0] : 336
          Result Array [0] [1] [1] : 18
          Result Array [0] [1] [2] : 315
          Result Array [0] [2] [0] : 9
          Result Array [0] [2] [1] : 12
          Result Array [0] [2] [2] : 64
          Result Array [1] [0] [0] : 216
          Result Array [1] [0] [1] : 5
          Result Array [1] [0] [2] : 108
          Result Array [1] [1] [0] : 32
          Result Array [1] [1] [1] : 75
          Result Array [1] [1] [2] : 224
          Result Array [1] [2] [0] : 81
          Result Array [1] [2] [1] : 20
          Result Array [1] [2] [2] : 45
          Result Array [2] [0] [0] : 35
          Result Array [2] [0] [1] : 32
          Result Array [2] [0] [2] : 135
          Result Array [2] [1] [0] : 448
          Result Array [2] [1] [1] : 72
          Result Array [2] [1] [2] : 144
          Result Array [2] [2] [0] : 8
          Result Array [2] [2] [1] : 189
          Result Array [2] [2] [2] : 48 */
