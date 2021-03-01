/* Output the result of dividing two integers of type int as double with and without conversion */

#include <stdio.h>

int main(){
    int a = 47;
    int b = 3;
    double result1;
    double result2;
    result1 = (double) a / b;
    result2 = a / b;
    printf("Result with casting = %lf\nResult without casting = %lf\n", result1, result2);
    return 0;
}

/* Prints Result with casting = 15.666667
          Result without casting = 15.000000 */
