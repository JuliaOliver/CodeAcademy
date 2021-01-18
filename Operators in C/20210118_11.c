/* Increment / decrement operators */

#include <stdio.h>

int main(void){
    int iCounter = 0;
    while( ++iCounter < 3 ) {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++ iCounter);
        printf("-- Counter: %d\n", -- iCounter);
        printf("Counter ++: %d\n", iCounter ++);
        printf("Counter --: %d\n", iCounter --);
    }
    return 0;
}

/* Prints Counter 1
          ++ Counter: 2
          -- Counter: 1
          Counter ++: 1
          Counter --: 2
          Counter 2
          ++ Counter: 3
          -- Counter: 2
          Counter ++: 2
          Counter --: 3 */

/* What happens if the counter overflows? */
/* The counter cannot be overflowed, because the moment it receives a value of 3, the loop ends */
