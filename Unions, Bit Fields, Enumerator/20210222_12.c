/* Write a program that uses bit fields. The bit fields must be members 
of a structure and be of the following types: unsigned int and char. 
Set their size short int 3 bits, char 6 bits. 
struct <tagStruct> {
Ctype m_bitField: N;
CType2 m_bitField2: M;
};
Define a structure variable and initialize them with a value of 7 and ‘c’ respectively. 
Print the items. Also print the size of the structure. Add more members of the existing 
types and print the size of the structure again. Rearrange them as a sequence, to be 
char, char, short int, short int. How does the size of the structure change?
Try the same with the #pragma pack preprocessor (1). */

#include <stdio.h>

struct tagStruct{
    unsigned int intField: 3;
    char charField: 6;
};

struct tagStruct2{
    char charField2: 6;
    char charField3: 6;
    unsigned short int intField2: 3;
    unsigned short int intField3: 3;
};

int main(void){
    struct tagStruct variable = {7, 'c'};

    printf("Size of sctuct: %d", sizeof(variable));
    printf("\nInteger: %u\nChar: %c", variable.intField, variable.charField);

    struct tagStruct2 variable2 = {'c', 'c', 7, 7};

    printf("\n\nSize of sctuct: %d", sizeof(variable2));
    printf("\nChar1: %c\nChar2: %c\nInteger1: %u\nInteger2: %u", variable2.charField2, variable2.charField3, variable2.intField2, variable2.intField3);

    return 0;
}

/* Prints Size of sctuct: 8
          Integer: 7
          Char: �

          Size of sctuct: 4
          Char1: �
          Char2: �
          Integer1: 7
          Integer2: 7 */
