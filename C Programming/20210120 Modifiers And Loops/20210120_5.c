/* Loop with postcondition */

#include <stdio.h>

int main (){
    int nValue = 13;
    do{
        printf("Value: %d\n", nValue);
        nValue++;
    } while(nValue < 20);

    return 0;
}

/* Prints Value: 13
          Value: 14
          Value: 15
          Value: 16
          Value: 17
          Value: 18
          Value: 19 */
