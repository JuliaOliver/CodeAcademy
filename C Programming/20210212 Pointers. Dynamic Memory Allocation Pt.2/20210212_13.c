/* If x is a real number and y is a natural number, then degree
defines as follows: x of degree y = x.x. .... x (y times)
When y <0, then x of y = 1 / x -y. The following properties are valid (x 0):
x y = x y-1 .x x y = x y + 1 / x x y1 + y2 = x y1 .x y2 x y1 .y2 = (x y1)
y2
The trivial implementation for calculating x y is by
perform y consecutive multiplications. */

#include <stdio.h>

int main(void){
    int x;
    int y;
    int result = 1;
    printf("Enter a number 'x': ");
    scanf("%d", &x);
    printf("Enter a power 'y': ");
    scanf("%d", &y);

    for(int i = 0; i < y; i++){
        result *= x;
    }

    printf("'x' to the power of 'y' = %d", result);

    return 0;
}

/* Depending the entered input, prints the corresponding answer */
