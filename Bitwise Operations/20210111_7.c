/* Set to zero all the bits of the numbers, in the even position. */

#include <stdio.h> 

int main(){ 
    int a = 100;
    int mask = 0xAAAAAAAA; 
    int newNum = (a & mask); 
    printf("%d", newNum);

    return 0;
}

/* prints 32 */
