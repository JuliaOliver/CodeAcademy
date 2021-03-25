/* Define and initialize a 2-dimensional array of 5 elements (5 x 5). 
Once you're done, enter the data into the array, reading from the user with scanf. */

#include <stdio.h>

int main(){
    int array[5][5] = {};
    int number;

    for (int i = 0; i < 5; i++){
        printf("Enter row number: ");
        scanf(" %d", &number);
        for (int j = 0; j < 5; j++){
            printf("Enter col number: ");
            scanf(" %d", &number);
            array[i][j] = number;
        }
    }

    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 5; j++){
            printf("Array [%d] [%d] : %d\n", i, j, array[i][j]);
        }
    }
    
    return 0;
}

/* Depending the entered input, prints the corresponding answer */
