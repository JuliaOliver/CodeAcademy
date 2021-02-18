/* Using the bubble method to sort an array of numbers (see wiki).
The user enters the number of numbers and then enters each number. 
Write a program that should sort the numbers and display them in 
a sorted form, at least displaying them first.
Variation: Do the same with an array of characters. */

#include <stdio.h>

void bubbleSort(int arrayChar[], int n);
void swap(int *xp, int *yp);

int main(void){
    int array[100];
    int n;
    printf("Enter numbers/characters count you want to sort\nCount: ");
    scanf(" %d", &n);
    char c;

    printf("Enter the numbers/characters one by one (sepatated by new line): \n");

    for(int i = 0; i < n; i++){
        scanf(" %c", &c);
        array[i] = c;
    }

    printf("\n");

    bubbleSort(array, n);

    return 0;
}

void swap(int *xp, int *yp){ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void bubbleSort(int arrayChar[], int n){ 
    int i, j; 
    for (i = 0; i < n-1; i++){        
        for (j = 0; j < n-i-1; j++){  
            if (arrayChar[j] > arrayChar[j+1]){
                swap(&arrayChar[j], &arrayChar[j+1]);
            }
        }
    }
    for(i = 0; i < n; i++){
        printf("%c  ", arrayChar[i]);
    }  
}

/* Depending the entered input, prints the corresponding answer */
