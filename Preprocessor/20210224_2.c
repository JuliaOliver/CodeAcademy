/* Write a swap macro (t, x, y) that changes the places of the two arguments of type t. */

#include <stdio.h>
#define SWAP(t, x, y){\
    t i = x;\
    x = y;\
    y = i;\
    }

int main(void){
    int a = 5;
    int b = 10;
    printf("Before swap a = %d, b = %d\n", a, b);

    SWAP(int, a, b);
    printf("After swap a = %d, b = %d\n", a, b);

    return 0;
}

/* Prints Before swap a = 5, b = 10
          After swap a = 10, b = 5 */
