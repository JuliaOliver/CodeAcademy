/* Find the values in the range 1-5, inclusive, in a two-dimensional array [5][5] 
full of random numbers in the range 0-10, inclusive. 
Use a function to fill the numbers with random ones. */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void arrayFill();

int main(void){
    arrayFill();

    return 0;
}

void arrayFill(){
    int array[5][5];
    time_t t = 10;
    srand(time(&t));
    int n = 5;
    int randomMax = 10;

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j++){
            array[i][j] = rand() % randomMax;
        }
    }

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j++){
            if (array[i][j] >= 1 && array[i][j] <=5){
                printf("Array[%d][%d] = %d\n", i, j, array[i][j]);
            }
        }
    }
}
