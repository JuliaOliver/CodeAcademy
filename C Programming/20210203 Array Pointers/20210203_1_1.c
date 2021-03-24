/* Declare three arrays with three elements:
The first of type char
The second of type int
The third of the double type
Print the dimensions of the arrays using the sizeof (arr) operator; */

#include <stdio.h>

int main(void){
    char charArray[3];
    int intArray[3];
    double doubleArray[3];

    printf("Size of CharArray = %d Bytes\n", sizeof(charArray));
    printf("Size of IntArray = %d Bytes\n", sizeof(intArray));
    printf("Size of DoubleArray = %d Bytes", sizeof(doubleArray));

    return 0;
}

/* Prints Size of CharArray = 3 Bytes
          Size of IntArray = 12 Bytes
          Size of DoubleArray = 24 Bytes */
