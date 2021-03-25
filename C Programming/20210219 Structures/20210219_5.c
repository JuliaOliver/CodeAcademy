/* a) Make a 15 by 15 box by printing dashes in the console.
b) Make point a (3, 4) by printing @
c) Make point b (7, 10), printing @
d) Fill the rectangle with @ */

#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(void){
    int matrix[15][15];
    int i, j;

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            matrix[i][j] = '-';
        }
    }

    for (int i = 0; i < 15; i++){
        printf("\n");
        for (int j = 0; j < 15; j++){
            printf(" %c ", matrix[i][j]);
        }
    }
    printf("\n\n ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~\n");

    struct point a = {3, 4};
    struct point b = {7, 10};
    
    matrix[a.x][a.y] = '@';
    matrix[b.x][b.y] = '@';

    /* Printing the matrix with the two given points on it */
    for (int i = 0; i < 15; i++){
        printf("\n");
        for (int j = 0; j < 15; j++){
            printf(" %c ", matrix[i][j]);
        }
    }
    printf("\n\n ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~\n");

    for (i = a.x; i <= b.x; i++){
        for (j = a.y; j <= b.y; j++){
            matrix[i][j] = '@';
        }
    }

    /* Printing tha matrix with the rectangle in it */
    for (int i = 0; i < 15; i++){
        printf("\n");
        for (int j = 0; j < 15; j++){
            printf(" %c ", matrix[i][j]);
        }
    }

    return 0;
}

/* Prints 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 

 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  @  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  @  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 

 ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~

 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  @  @  @  @  @  @  @  -  -  -  - 
 -  -  -  -  @  @  @  @  @  @  @  -  -  -  - 
 -  -  -  -  @  @  @  @  @  @  @  -  -  -  - 
 -  -  -  -  @  @  @  @  @  @  @  -  -  -  - 
 -  -  -  -  @  @  @  @  @  @  @  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  - 
 -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  */
