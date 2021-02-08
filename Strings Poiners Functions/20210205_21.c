/* Write a function that sorts a lexicographical (alphabetically) array of characters (char []). 
Use the "Bubble Method", search the Internet. */

#include <stdio.h>

void bubbleSort(int arrayChar[], int n);
void swap(int *xp, int *yp);

int main(void){
    int array[10] = {'d', 'z', 'f', 'o', 'm', 'j', 'v', 't', 'y', 'e'};
    int n = 10;

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
        printf("%c\n", arrayChar[i]);
    }  
}

/* Prints d
          e
          f
          j
          m
          o
          t
          v
          y
          z */
