/* Arithmetic operators */

#include <stdio.h>

int main(void){
    int iX = 13;
    int iY = 44;
    int iResult = 0;
    iResult = iX - iY;
    printf("%d - %d = %d\n", iX, iY, iResult);

    iResult = iY / iX;
    printf("%d / %d = %d\n", iY, iX, iResult);

    iResult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iResult);

    float fX = 10.123456;
    float fY = 10.654321;
    float fResult = 0;

    fResult = fX * fY;
    printf("%f * %f = %f\n", fX, fY, fResult);

    fResult = fX + fY;
    printf("%f + %f = %f\n", fX, fY, fResult);

    return 0;
}

/* Prints 13 - 44 = -31
          44 / 13 = 3
          44 / 13 Remainder: 5
          10.123456 * 10.654321 = 107.858543
          10.123456 + 10.654321 = 20.777777 */
