/* Sum the elements of a two-dimensional array and find the average by rows and columns. (Imagine they are students in classes). */

#include <stdio.h>

int main(){
    int array[3][3] = {};
    int number;
    int rows = 3;
    int cols = 3;
    double average;

    for (int i = 0; i < 3; i++){
        printf("Enter row number: ");
        scanf(" %d", &number);
        for (int j = 0; j < 3; j++){
            printf("Enter col number: ");
            scanf(" %d", &number);
            array[i][j] = number;
        }
    }

    for(int i = 0; i < rows; i++){  
        double sumRow = 0;  
        for(int j = 0; j < cols; j++){  
          sumRow += array[i][j];  
        }
        average = sumRow / rows;

        printf("Average of %d row: %.3f\n", (i+1), average);
    }

    for(int i = 0; i < cols; i++){  
        double sumCol = 0;  
        for(int j = 0; j < rows; j++){  
          sumCol = sumCol + array[j][i];  
        } 
        average = sumCol / cols; 

        printf("Average of %d column: %.3f\n", (i+1), sumCol);
    }
    
    return 0;
}

/* Depending the entered elements to the array, calculates and prints
the average value of each row and each column of the array */
