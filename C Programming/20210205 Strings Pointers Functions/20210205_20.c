/* Check that the sum of the elements of two three-dimensional arrays is the same. 
Use the problem that sums the elements of an array, which we did before to get the 
sums of the two three-dimensional arrays and then compare the sums. 
This task is suitable in the presence of a large number of data 
(matrices in three dimensions) to be arranged on some basis. */

#include <stdio.h>

int arraySum(int array[3][3][3], int n);

int main(){
    int n = 3;
    int firstArray[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{4, 2, 6}, {7, 8, 9}, {1, 8, 3}}, {{7, 18, 2}, {14, 2, 8}, {4, 7, 10}}};
    int secondArray[3][3][3] = {{{12, 2, 5}, {4, 15, 7}, {7, 3, 8}}, {{11, 2, 7}, {12, 8, 9}, {1, 2, 3}}, {{7, 8, 9}, {1, 2, 3}, {4, 5, 6}}};

    
    int firstResult = arraySum(firstArray, n);
    int secondResult = arraySum(secondArray, n);

    if(firstResult == secondResult){
        printf("%d is equal to %d", firstResult, secondResult);
    }
    else{
        printf("%d is not equal to %d", firstResult, secondResult);
    }
    
    return 0;
}

int arraySum(int array[3][3][3], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                sum += array[i][j][k];
            }
        }
    }
    
    return sum;
}

/* Prints 165 is not equal to 163 */
