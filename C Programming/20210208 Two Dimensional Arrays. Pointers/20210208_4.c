/* Given a one-dimensional array with N elements (you choose an N value), 
write a function that calculates the average value of the elements 
in the array by returning it as a double. */

#include <stdio.h>

double arrayAverage(int array[], int a);

int main(){
    int n = 7;
    int number;
    int array[7] = {};

    for (int i = 0; i < n; i++){
        printf("Enter array element: ");
        scanf(" %d", &number);
        array[i] = number;
    }

    double result = arrayAverage(array, n);

    printf("\nThe average value of your array is %f\n\n", result);
    
    return 0;
}

double arrayAverage(int array[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += array[i];
    }
    double average = sum / n;
    
    return average;
}

/* Depending the entered input, prints the corresponding answer */
