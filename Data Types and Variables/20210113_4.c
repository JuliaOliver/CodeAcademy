/* Sum signed char a = -10 and unsigned char z = 0 */

#include <stdio.h>

int main(void){
    unsigned char z = 0;
    signed char a = -10;
    z = z + a;
    printf("%d\n", z);
    printf("%c", z);

    return 0;
}
/* Prints 246
          ÷ */
