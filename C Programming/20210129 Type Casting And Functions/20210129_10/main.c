/* Write a program in C that contains 3 functions,
export their prototypes to a separate .h file.
1. The first function to calculate at least a common multiple of two positive numbers.
2. The second function returns the absolute value of the numbers (the positive value of the numbers).
a. It must be able to accept float as a parameter and return float.
b. Test with int and float.
3. Write a function that calculates the square root of a number.
a. Check if it is a negative number and return -1.
b. Use your second function to turn the number positive and
to find the square root of it. */

#include <stdio.h>
#include "functions_prototypes.h"

int main(){
    int a, b;
    float c, z;
    printf("Enter two numbers 'a' and 'b' to see theis least multuple\n");
    printf("a = ");
    scanf("%i", &a);
    printf("b = ");
    scanf("%i", &b);
    printf("The least common multiple of 'a' and 'b' is %d\n", leastCommonMultipleFunction(a, b));

    printf("\nEnter a number 'c' to see it's absolute value\n");
    printf("c = ");
    scanf("%f", &c);
    printf("Absolute value of c = %.2f\n", absoluteValue(c));

    printf("\nEnter a number 'z' to see it's square root\n");
    printf("z = ");
    scanf("%f", &z);
    printf("Square root of z = %.2f\n", squareRootOfNum(z));

    return 0;
}

/* Depending the entered input, prints the corresponding answer */

/* In this solution, is not possible to return -1 if the number
given to the function is negative, because in the if-statement
I chech if it is negative, and if it is I call the second function
which returns it's absolute value. And when I pass the new value of 
the number I return the answer. If I return -1 in the if-statement
the answer will be awlays -1 */
