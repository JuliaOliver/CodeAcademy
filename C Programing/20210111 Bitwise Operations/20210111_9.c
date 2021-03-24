/* Set to zero all the bits between positions 3 and 7. */

#include <stdio.h> 

int main(){ 
    int a = 100;
    int mask =  0b10001111;
    int num = a & mask;

    printf("%d", num);

    return 0;
}
/* prints 4 */
