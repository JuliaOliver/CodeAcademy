/* Increment and decrement prefixed and postfixed */

#include <stdio.h>

int main(void){
    int i = 0, j = 0;

    printf("i = %d, j = %d\n", i, j);

    printf("\nj=i++: j = %d\n", j=i++); //j=0

    printf("\ni = %d, j = %d\n", i, j);// i=1, j=0

    printf("\nj = ++i: j = %d\n", j=++i);// j=2

    printf("\ni = %d, j = %d\n", i, j);//i=2, j=2

    printf("\ni--: i = %d\n", i--);// i=2

    printf("\ni = %d, j = %d\n", i, j);// i=1, j=2

    return 0;
}

/* Prints i = 0, j = 0

          j=i++: j = 0

          i = 1, j = 0

          j = ++i: j = 2

          i = 2, j = 2

          i--: i = 2

          i = 1, j = 2 */
