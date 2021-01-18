/* In what order will the operations be performed?
true = x && y & x << 1;
What will be printed on the screen? */

#include <stdio.h>

int main(void){

    int x = 10;
    int y = 10;
    int true;

    true = x && y & x << 1;

    printf("True = %d", true);

    return 0;
}

/* Prints True = 0 */
/* The order of evaluation of all operations is from left to right and all have 
the same priority, so the operations are performed one by one from left to right. */
