/* Examine and implement the quicksort algorithm. */

#include <stdio.h>

void quicksort(int *target, int left, int right);

int main(void){
    int i;
    int size = 10; 
    int array[10] = {2, 6, 3, 8, 5, 10, 4, 1, 9, 7};

    quicksort(array, 0, size-1);

    for(i=0; i < size; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

void quicksort(int *target, int left, int right) {
    if(left >= right){
        return;
    }

    int i = left; 
    int j = right;
    int temporary;
    int pivot = target[i];

    for(;;){
        while(target[i] < pivot){
            i++;
        }

        while(pivot < target[j]){
            j--;
        }

        if(i >= j){
            break;
        }

        temporary = target[i]; 
        target[i] = target[j]; 
        target[j] = temporary;
        i++; 
        j--;
    }

    quicksort(target, left, i - 1);
    quicksort(target, j + 1, right);
}

/* Prints 1 2 3 4 5 6 7 8 9 10 */
