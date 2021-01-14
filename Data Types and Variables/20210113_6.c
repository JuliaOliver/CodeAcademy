/* Define variables with a value of -127, 255, 6 237 498, 4 294 967 292, 
-9 000 000 000 000 775 845. Display each variable on the screen with printf () */

#include <stdio.h>

int main(void){
    signed char scValue = -127;
    printf("%c\n", scValue);

    char cValue = 255;
    printf("%c\n", cValue);

    unsigned int uiValue = 6237498;
    printf("%u\n", uiValue);

    unsigned int seconduiValue = 4294967292;
    printf("%u\n", seconduiValue);

    long long int llValue = -9000000000000775845;
    printf("%lld", llValue);

    return 0;
}
/* Prints  ü
 
           6237498
           4294967292
           -9000000000000775845 */
