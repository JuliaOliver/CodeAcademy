/* Defining and initializing a two-dimensional array */

#include <stdio.h>

int main(){
    int aiValue[][3] = {{1, 2, 3}, {5, 6, 7}};

    for (int i = 0; i < 2; i ++){
        for (int j = 0; j < 3; j++){
            printf("aiValue [%d] [%d] : %d\n", i, j, aiValue[i][j]);
        }
    }
    
    return 0;
}

/* Prints aiValue [0] [0] : 1
          aiValue [0] [1] : 2
          aiValue [0] [2] : 3
          aiValue [1] [0] : 5
          aiValue [1] [1] : 6
          aiValue [1] [2] : 7 */
