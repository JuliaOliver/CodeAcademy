/* Write in eight consecutive bytes in the memory with a value of 0xBB (1011 1011) 
and print the contents of the above bytes if the type is: double, signed long long, unsigned long long */

#include <stdio.h>

int main(void){
    double f = 0xBB;
    signed long long i = 0xBB;
    unsigned long long a = 0xBBu;
    printf("f = %lf, i = %lld, a = %lld", f, i, a);
    return 0;
}

/* Prints f = 187.000000, i = 187, a = 187 */
