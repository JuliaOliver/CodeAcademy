/* Comma operator - same as 20210118_5.c */

#include <stdio.h>
int main(void){
    int nX = 1, nY = 2;
    printf("\nInit values: X = %d, Y = %d\n", nX, nY);

    nX = 1 + 2, 2 * 3, 3 + 4;
    nY = (7 * 8, 8 + 9, 9 - 4);
    printf("\nX = %d, Y = %d\n", nX, nY);

    return 0;
}

/* Prints Init values: X = 1, Y = 2

          X = 3, Y = 5 */

/* The order of evaluation of all operations is from left to right, so in the case of x
it appropiates the value of 3 and stops there without appropriating the values of 6 and 7, but
in the case of y, because the parentheses have the highest priority, the variable y
appropiates the value of, 56, then the value of 17 and at last the value of 5 and stops there. */
