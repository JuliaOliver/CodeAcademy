/* Define and initialize three pointers, type int, type float, type char */

#include <stdio.h>

int main(void){
    int integer = 5;
    float floatingPointNum = 3.14;
    char character = 'a';

    int *integerPointer;
    float *floatingPointer;
    char *characterPoinrer;

    integerPointer = &integer;
    floatingPointer = &floatingPointNum;
    characterPoinrer = &character;

    printf("Integer = %d, Address of variable = %p, Address of pointer = %p\n", *integerPointer, &integer, &integerPointer);
    printf("Float = %f, Address of variable = %p, Address of pointer = %p\n", *floatingPointer, &floatingPointNum, &floatingPointer);
    printf("Character = %c, Address of variable = %p, Address of pointer = %p\n", *characterPoinrer, &character, &characterPoinrer);

    return 0;
}

/* Prints Integer = 5, Address of variable = 000000000061FE1C, Address of pointer = 000000000061FE08
          Float = 3.140000, Address of variable = 000000000061FE18, Address of pointer = 000000000061FE00
          Character = a, Address of variable = 000000000061FE17, Address of pointer = 000000000061FDF8 */
