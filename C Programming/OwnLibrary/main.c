#include <stdio.h>
#include <string.h>
#include "functionsPrototypes.h"

/* FILE TO TEST SOME OF THE FUNCTIONS */

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int a = 5, b = 10;
    char string[20] = "HelloWorld";

    printArray(arr, 5);
    toLower(string);

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    decimalToBinary(b);

    printf("String = %s\n", string);
    reverse(string);
    printf("String = %s\n", string);

    return 0;
}
