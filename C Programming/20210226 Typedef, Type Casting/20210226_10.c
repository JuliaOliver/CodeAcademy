/* Try to use as many implicit type conversions in C as possible */

#include <stdio.h>

int main(void){
    char cValue = '0';
    short sValue = - (cValue + cValue);
    unsigned short usValue = - (cValue + cValue);
    int iValue = sValue;
    unsigned int uiValue = sValue;
    long lValue = iValue;
    unsigned long ulValue = iValue;
    float fValue = ulValue;
    double dfValue = ulValue; 

    printf("cValue = %c\nsValue = %d\nusValue = %u\niValue = %d\nuiValue = %d\nlValue = %ld\nulValue = %lu\nfValue = %f\ndValue = %lf",\
    cValue, sValue, usValue, iValue, uiValue, lValue, ulValue, fValue, dfValue);

    return 0; 
}

/* Prints cValue = 0
          sValue = -96
          usValue = 65440
          iValue = -96
          uiValue = -96
          lValue = -96
          ulValue = 4294967200
          fValue = 4294967296.000000
          dValue = 4294967200.000000 */
