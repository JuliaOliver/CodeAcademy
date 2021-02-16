/* Write a program that defines an array [10] [10] [10], fills it with 
random numbers and calculates the arithmetic mean with only one loop. */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void){
    int n = 10;
    int randomMax = 100000;
    int array[10][10][10];
    int averageSum;
    int sum = 0;
    int counter = 0;

    time_t t = 10;
    srand(time(&t));

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                array[i][j][k] = rand() % randomMax;
                sum += array[i][j][k];
                counter +=1;
            }
        }
    }
    averageSum = sum / counter;

    printf("%d", averageSum);

    return 0;
}

/* Prints the average sum of all randomy filled elements of the array */
