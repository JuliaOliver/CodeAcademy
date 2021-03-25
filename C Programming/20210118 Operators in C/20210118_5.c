/* In what order will the comma (,) operator be executed? */

#include <stdio.h>

int main(void){
    int x = 1, y = 0;
    int z = y || x;
    printf("Z = %d\n", z);

    printf("\nInit values: X = %d, Y = %d\n", x, y);

    x = 1 + 2, 2 * 3, 3 + 4;
    y = (7 * 8, 8 + 9, 9 - 4);

    printf("\nX = %d, Y = %d\n", x, y);

    return 0;
}

/* Prints Z = 1

          Init values: X = 1, Y = 0

          X = 3, Y = 5 */
          
/* The order of evaluation of all operations is from left to right, so in the case of x
it appropiates the value of 3 and stops there without appropriating the values of 6 and 7, but
in the case of y, because the parentheses have the highest priority, the variable y
appropiates the value of, 56, then the value of 17 and at last the value of 5 and stops there. */
