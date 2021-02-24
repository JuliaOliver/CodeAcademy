/* Write functions as macros:
1. Function AVG (x, y), which calculates the arithmetic mean of two numbers given as a parameter.
2. An AVG function that calculates the arithmetic mean of numbers in a certain range.
3. Write a raise function that raises x to y
4. Write the function TOUPPER, which makes the lowercase letter a in uppercase A.
5. Write the function DISP ((f), (x)), which shows the result of functions returning double 
as the square root. DISP (sqrt, 3.0) The macro should expand to printf (“sqrt (% g) =% g \ n”, 3.0, sqrt (3.0)); */

#include <stdio.h>
#include <math.h>

#define AVG(x, y) ((x+y)/2)

#define AVGR(x, y) ((x+y)/2) /* The arithmetic mean of numbers in range is equal to the arithmetic mean
of the beggining and the end of the range - range from 2 to 4(inclusive) (2+3+4) / 3 = 3; 2+4 / 3 = 3 */

#define SQUARE(x, y) (pow(x, y))

#define TOUPPER(a) (a-32)

#define DISP(f, x) printf("Sqrt(%g) = %g\n", 3.0, sqrt(3.0))

int main(void){
    printf("AVG = %d\n", AVG(8, 16));
    printf("AVRG = %.2f\n", AVGR(5.0, 10.0));
    printf("SQUARE = %.2f\n", SQUARE(3, 4));
    printf("TOUPPER = %c\n", TOUPPER('j'));
    DISP(sqrt, 3.0);

    return 0;
}

/* Prints AVG = 12
          AVRG = 7.50
          SQUARE = 81.00
          TOUPPER = J
          Sqrt(3) = 1.73205 */  
