/* Define and initialize a 3D array with the element (3 x 3 x 3). */

#include <stdio.h>

int main(){
    int array[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{4, 2, 6}, {7, 8, 9}, {1, 2, 3}}, {{7, 8, 9}, {1, 2, 3}, {4, 5, 6}}};

    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                printf("Array [%d] [%d] [%d] : %d\n", i, j, k, array[i][j][k]);
            }
        }
    }
    
    return 0;
}

/* Prints Array [0] [0] [0] : 1
          Array [0] [0] [1] : 2
          Array [0] [0] [2] : 3
          Array [0] [1] [0] : 4
          Array [0] [1] [1] : 5
          Array [0] [1] [2] : 6
          Array [0] [2] [0] : 7
          Array [0] [2] [1] : 8
          Array [0] [2] [2] : 9
          Array [1] [0] [0] : 4
          Array [1] [0] [1] : 2
          Array [1] [0] [2] : 6
          Array [1] [1] [0] : 7
          Array [1] [1] [1] : 8
          Array [1] [1] [2] : 9
          Array [1] [2] [0] : 1
          Array [1] [2] [1] : 2
          Array [1] [2] [2] : 3
          Array [2] [0] [0] : 7
          Array [2] [0] [1] : 8
          Array [2] [0] [2] : 9
          Array [2] [1] [0] : 1
          Array [2] [1] [1] : 2
          Array [2] [1] [2] : 3
          Array [2] [2] [0] : 4
          Array [2] [2] [1] : 5
          Array [2] [2] [2] : 6 */
