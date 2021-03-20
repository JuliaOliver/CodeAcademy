#include "prototypes.h"

/* Function to sum the result of each participant (sums each row of the matrix) */
int lineSum(int *matrixRow, int col){
    int summary = 0;
    for(int i = 0; i < col; i++){
        summary += matrixRow[i];
    }

    return summary;
}

/* Function that helps the sorting, compares each line with the next one - is used in the next function,
if the two lines are equal it starts comparing their columns until one of them is bigger or until it reaches
the end of the line */
short compareArrayLines(int *arr1, int *arr2, int col){
    /* returns 1 -> arr1 > arr2
       returns 0 -> arr1 == arr2
       returns -1 -> arr1 < arr2 */

    int sum1 = lineSum(arr1, col);
    int sum2 = lineSum(arr2, col);

    if(sum1 > sum2){
        return 1;
    }
    if(sum1 < sum2){
        return -1;
    }
    
    for(int i = 0; i < col; i++){
        if(arr1[i] > arr2[i]){
            return 1;
        }
        if(arr1[i] < arr2[i]){
            return -1;
        }
    }
    return 0;
}

void swap(int *xp, int *yp){ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}


/* The main task of this function is to finally calculate the results, by comapring the result ot each participant.
It works on the principle of the bubble sort algorithm */
void calculateAndSaveResult(int **matrix, int row, int col){ 
    int *indices = (int*) malloc(row * sizeof(int)); /* Dynamically  allocating memory for the array that will keep the correct arrangement of the participants */

    for(int i = 0; i < row; i++){
        indices[i] = i;
    }

    for (int i = 0; i < row-1; i++){        
        for (int j = 0; j < row-i-1; j++){  
            if (compareArrayLines(matrix[indices[j]], matrix[indices[j+1]], col) < 0){
                swap(&indices[j], &indices[j+1]);
            }
        }
    }
    for(int i = 0; i < row; i++){
        indices[i] += 1;
    }

    char str[row];
    for(int i = 0; i < row; i++){
        itoa(indices[i], &str[i], 10); /* Converting the integers of the array with the correct arragement of the participants to string */
    }

    char strIndices[row*2];
    int j = 0;
    for(int i = 0; i<row; i++){
        strIndices[j] = str[i];
        j++;
        strIndices[j] = ' '; /* Adding single spaces between each number - formatting the output */
        j++;
    }
    strIndices[j] = '\0';

    FILE *outputFilePtr; /* Creating a pointer to the output file I need */

    outputFilePtr = fopen("conc.out", "w+"); /* Opening the file if it exists ot creates a new one if it doesn't */

    for(int i = 0; i < row*2; i++){
        fwrite(&strIndices[i], 1, sizeof(char), outputFilePtr); /* Writing (or overwiting if there is such file with data in it) the output data */
    }

    free(indices); /* Releasing the memory used for the array that keeps the correct arrangement of the participants */
    fclose(outputFilePtr); /* Closing the output file */
    outputFilePtr = NULL; /* Setting the pointer to the output file to NULL */
}
