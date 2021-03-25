/* Calculate the sum of integers in a given range [a, b] -
use of a loop with a precondition - while statement. */

#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    int summary = a;

    while (b < 11){
        summary += b++;
    }
    
    printf("Sum of numbers in range 1 to 10 inclusive = %d", summary);

    return 0;
}

/* Prints Sum of numbers in range 1 to 10 inclusive = 55 */
