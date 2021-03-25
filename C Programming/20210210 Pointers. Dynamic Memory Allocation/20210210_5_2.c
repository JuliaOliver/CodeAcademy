/* Rewrite the sorting algorithm without using incrementing variables */

#include <stdio.h>

void sort(int a[], int n);

int main(void){
    int array[11] = {'d', 'z', 'f', 'o', 'm', 'j', 'v', 't', 'y', 'e'};
    int n = 10;

    sort(array, n);

    return 0;
}

void sort(int a[], int n){
    int temp;
    int *iPointer = a;
    int *jPointer = a;

    for(iPointer; *iPointer; iPointer++){
        for (jPointer = iPointer + 1; *jPointer; ++jPointer){
            if (*iPointer > *jPointer){
                temp = *iPointer;
                *iPointer = *jPointer;
                *jPointer = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%c\n", a[i]);
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
