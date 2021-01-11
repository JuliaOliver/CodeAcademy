/* Change the bit value of a number to a specific position. */

#include <stdio.h> 

int main(){ 
    int a = 5, index = 1;
    int mask = (1u << index);
    int newNum = a ^ mask;
    printf("%d", newNum);

    return 0;
}
/* prints 7 */
