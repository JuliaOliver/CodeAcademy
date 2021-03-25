/* Define variables with value 4.9876543, 7.123456789012345678890, 
18 398 458 438 583 853.28, 18 398 458 438 583 853.39875937284928422. 
Display each variable on the screen with printf () */

#include <stdio.h>

int main(void){
    float fValue = 4.9876543;
    __mingw_printf("%.6f\n", fValue);

    long double ldValue = 7.123456789012345678890;
    __mingw_printf("%.18Lf\n", ldValue);

    double dValue = 18398458438583853.28;
    __mingw_printf("%.2f\n", dValue);

    long double sldValue = 18398458438583853.39875937284928422;
    __mingw_printf("%.17Lf", sldValue);

    return 0;
}
/* Cannot print the correct numbers.
Prints 4.987654
       7.123456789012345247
       18398458438583852.00
       18398458438583852.00000000000000000 */
       
/* All of the numbers checked with the sizeof() function,
have the size ot 8 bytes, but the first, second and fourth 
seem to be float, long double and again long double
because of the decimals, and the fourth because of its large whole number part too */
