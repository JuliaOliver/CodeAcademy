/* Print the last element of the declared in file 20210203_1_1.c arrays:
The first of type char
The second of type int
The third of the double type */

#include <stdio.h>

int main(void){
    char charArray[] = {'a', 'b', 'c'};
    int intArray[] = {1, 2, 3};
    double doubleArray[] = {1.00, 2.00, 3.00};

    printf("Size of CharArray = %d Bytes\n", sizeof(charArray));
    printf("Last element of CharArray is: %c\n\n", charArray[2]);
    printf("Size of IntArray = %d Bytes\n", sizeof(intArray));
    printf("Last element of IntArray is: %d\n\n", intArray[2]);
    printf("Size of DoubleArray = %d Bytes\n", sizeof(doubleArray));
    printf("Last element of DoubleArray is: %.2f", doubleArray[2]);

    return 0;
}

/* Prints Size of CharArray = 3 Bytes
          Last element of CharArray is: c

          Size of IntArray = 12 Bytes
          Last element of IntArray is: 3

          Size of DoubleArray = 24 Bytes
          Last element of DoubleArray is: 3.00 */
