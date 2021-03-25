/* Create a new custom type to the long long int type. 
Use it in the printf function, print the size. */

#include <stdio.h>

typedef long long int t_customLLI;

int main(void){
    t_customLLI number = 240795270199;
    printf("Value of custom type = %lld\nSize of custom type = %d Bytes",number, sizeof(t_customLLI));

    return 0;
}

/* Prints Value of custom type = 240795270199
          Size of custom type = 8 Bytes */
