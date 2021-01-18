/* Assignment operators */

# include <stdio.h>

int main(void){
    int nResult = 13;
    int nX = 4;
    printf("Result = %d\n", nResult);

    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);

    nResult = 5;
    nResult *= nX;
    printf("Result *= %d -> %d\n", nX, nResult);

    nResult = 20;
    nResult %= nX;
    printf("Result /= %d -> Remainder %d\n", nX, nResult);

    nResult = 14;
    nResult -= nX;
    printf("Result -= %d -> %d\n", nX, nResult);

    nResult = 16;
    nResult /= nX;
    printf("Result /= %d -> %d\n", nX, nResult);

    nResult = 10;
    nResult >>= nX;
    printf("Result >>= %d -> %d\n", nX, nResult);

    return 0;
}

/* Prints Result = 13
          Result += 4 -> 17
          Result <<= 4 -> 16
          Result *= 4 -> 20
          Result /= 4 -> Remainder 0
          Result -= 4 -> 10
          Result /= 4 -> 4
          Result >>= 4 -> 0 */
