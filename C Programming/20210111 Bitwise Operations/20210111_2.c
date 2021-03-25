/* Create a function that receives a parameter number and index and returns the bit value of the corresponding index. */

#include <stdio.h>

int getBit(int a, int index);

int main()
{
    int a = 5;
    int index = 2;

    printf("%d", getBit(a, index));

    return 0;
}

int getBit(int a, int index){
    int bitValue = (a >> index) & 1;
}
/* prints 1 */
