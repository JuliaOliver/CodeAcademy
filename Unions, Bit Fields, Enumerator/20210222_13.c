/* Merge with members unsigned short and char. Limit the bits used to 6. 
Initialize and display on the console. */

#include <stdio.h>

union tagUnion{
    unsigned short int intField: 6;
    char charField: 6;
};

int main(void){
    union tagUnion variable = {7, 'c'};

    printf("Size of sctuct: %d", sizeof(variable));
    printf("\nInteger: %u\nChar: %c", variable.intField, variable.charField);

    return 0;
}
