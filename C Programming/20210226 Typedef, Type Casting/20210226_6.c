/* Write a structure of user type key_t that contains a string and a number. */

#include <stdio.h>

typedef struct {char *c; int i;} t_customStructure;

int main(void){
    t_customStructure customStruct = {.c = "HelloWorld", .i = 3};

    printf("Custom structure: String = %s, Integer = %d", customStruct.c, customStruct.i);
    
    return 0;
}

/* Prints Custom structure: String = HelloWorld, Integer = 3 */
