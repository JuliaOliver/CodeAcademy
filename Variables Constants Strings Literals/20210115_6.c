/* Write in four consecutive bytes in the memory with a value of 0xAA (10101010) 
and print the contents of the above bytes, if the type is: float, signed int, unsigned int */

#include <stdio.h>

int main(void){
    float f = 0xAA;
    signed int i = 0xAA;
    unsigned a = 0xAAu;
    printf("f = %f, i = %d, a = %d", f, i, a);
    return 0;
}

/* Pritns f = 170.000000, i = 170, a = 170 */
