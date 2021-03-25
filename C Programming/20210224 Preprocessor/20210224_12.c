/* Write macro GENERIC_MAX (type) which must 
be expanded to the following function:

int int_max (int x, int y) {
    return x> y? x: y;
}
or
float float_max (float x, float y) {
    return x> y? x: y;
}
or
char char_max (char x, char y) {
    return x> y? x: y;
} */

#include <stdio.h>

#define GENERIC_MAX(x, y)((x) > (y) ? (x) : (y))

int main(void){
    int firstInt = 5, secondInt = 10;
    printf("Max Integer = %d\n", GENERIC_MAX(firstInt, secondInt));

    float firstFloat = 7.879435, secondFloat = 7.879523;
    printf("Max Float = %f\n", GENERIC_MAX(firstFloat, secondFloat));

    char firstChar = 'J', secondChar = 'E';
    printf("Max Character = %c\n", GENERIC_MAX(firstChar, secondChar));

    return 0;
}

/* Prints Max Integer = 10
          Max Float = 7.879523
          Max Character = J */
