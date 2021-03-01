/* Define a structure as a custom type. Initialize the members 
of the structure using the new user type. Print. */

#include <stdio.h>

typedef struct {char c; int i;} t_structure;

int main(void){
    t_structure firstStruct = {.c = 'J', .i = 3};

    printf("Custom structure: Character = %c, Integer = %d", firstStruct.c, firstStruct.i);
    
    return 0;
}

/* Prints Custom structure: Character = J, Integer = 3 */
