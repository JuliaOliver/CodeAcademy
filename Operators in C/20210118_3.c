/* What will be the result in the variable true? */

#include <stdio.h>

int main(void){

    int x = 10;
    int y = 10;
    int z = 30;
    int true = x == y + (z < y) != 20;

    printf("True = %d", true);

    return 0;
}

/* Prints True = 1 */
