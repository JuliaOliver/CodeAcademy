#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

int sumArray(int a[], int n);

int main(int argc, char *argv[]){
    int array[argc];
    for(int counter = 1; counter < argc; counter++){
        char *c = argv[counter];
        int num = atoi(c);
        if(num >= 1 && num <= INT_MAX){
            array[counter] = num; 
        }

        else{
            printf("%d\n", -1);
            exit(1);
        }
    }

    int summary = sumArray(array, argc);
    printf("%d\n", summary);
    return 0;
}

int sumArray(int a[], int n){
    int sum = 0;
    for (int i=1; i<n; i++){
        sum += a[i];
    }
    return sum;
}
