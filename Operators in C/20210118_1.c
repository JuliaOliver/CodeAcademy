/* We have two variables int x = 10; and int y = 10; create two variables int true, false; 
To the first assign the result of the comparison to x == y, and to the second x! = y. 
Print the variables true and false. */

#include <stdio.h>

int main(void){

    int x = 10;
    int y = 10;

    int true = x == y;
    int false = x != y;

    printf("True = %d\nFalse = %d", true, false);

    return 0;
}

/* Prints True = 1
          False = 0 */
