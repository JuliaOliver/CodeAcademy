/* Remove all bits of a number after the nth bit inclusive. */

#include <stdio.h> 

int main(){ 
    int a = 234, index = 4;
    int mask =  (0b11111111 >> 8 - index);
    int num = a & mask;

    printf("%d", num);

    return 0;
}
/* prints 10 */
