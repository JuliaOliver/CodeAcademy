/* Use the sizeof () function to check the size of your machine type. */

#include <stdio.h>

int main (){
    char cValue = 'b';
    printf("\n%d\n", sizeof(cValue));

    int iValue = 100;
    printf("\n%d\n", sizeof(iValue));

    long long int lValue = 11111111;
    printf("\n%d\n", sizeof(lValue));

    return 0;
}
/* In my case prints 1

                     4

                     8 */
