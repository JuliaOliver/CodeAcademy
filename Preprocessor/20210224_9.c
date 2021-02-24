/* Write a macro that creates a string identifier (string) */

#include <stdio.h>

#define MY_STR(x) #x

int main(){
    printf("Without variable - %s\nSize: %d\n\n", MY_STR(8), sizeof(MY_STR(8)));

    int num = 8;
    printf("With variable - %s\nSize: %d", MY_STR(num), sizeof(MY_STR(num)));
    
    return 0;
} 

/* Prints Without variable - 8
          Size: 2

          With variable - num
          Size: 4 */
