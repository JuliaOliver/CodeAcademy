/* Defining and using a pointer */

#include <stdio.h>

int main(){
    int nValue = 13;
    int *pnValue = NULL; /* address of nValue is assigned to pnValue */
    pnValue = &nValue; /* display value using ptr variable */

    printf("Value = %d, *pnValue = %d, pnValue (hex) = %0x\n", nValue, *pnValue, pnValue);

    return 0;
}

/* Prints Value = 13, *pnValue = 13, pnValue (hex) = 61fe14 */
