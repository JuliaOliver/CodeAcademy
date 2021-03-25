/* Define variables with a value of 24 212, -1 357 674, 1 357 674, 
-1 357 674 000, 3 657 895 000. Display each variable on the screen with printf() */

#include <stdio.h>

int main(void){
    unsigned short int usiValue = 24212;
    printf("%u\n", usiValue);

    int iValue = -1357674;
    printf("%d\n", iValue);

    unsigned int uiValue = 1357674;
    printf("%u\n", uiValue);

    int secondiValue = -1357674000;
    printf("%d\n", secondiValue);

    unsigned int seconduiValue = 3657895000;
    printf("%u", seconduiValue);

    return 0;
}
/* Prints 24212
          -1357674
          1357674
          -1357674000
          3657895000 */
