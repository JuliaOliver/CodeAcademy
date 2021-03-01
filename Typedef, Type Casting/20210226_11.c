/* The typedef structure node, containing one member of type int and one pointer to the 
type of the structure itself. Allocate memory dynamically for this structure with malloc. */

#include <stdio.h>
#include <stdlib.h>

typedef struct customStruct{int num; struct tagStest *ptr;} t_customStruct;

int main(void){
    typedef t_customStruct* ptr;
    ptr myStruct = (ptr)malloc(sizeof(t_customStruct));

    printf("Size of Custom Struct = %d", sizeof(myStruct));

    free(myStruct);

    return 0;
}

/* Prints Size of Custom Struct = 8 */
