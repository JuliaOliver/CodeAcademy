/* Print the numbers 13 to 19 using a for loop. */

#include <stdio.h>

int main(){
    int number;
    for (number = 13; number < 20; ++number) {
    printf("Number: %d\n", number);
    }

    return 0;
}

/* Prints Number: 13
          Number: 14
          Number: 15
          Number: 16
          Number: 17
          Number: 18
          Number: 19 */
