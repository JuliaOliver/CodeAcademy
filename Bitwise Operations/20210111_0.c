/* Declare a function addDigit that adds two numbers and returns their result */

#include <stdio.h>

int addDigit(int a, int b);

int main(void){
    int a = 5;
    int b = 3;
    int res;

    printf("%d", addDigit(a, b));

    return 0;
}

int addDigit(int a, int b){
    int res = a + b;
    return res;
}
/* prints 8 */
