/* Define a structure in which there is a pointer member to itself
structure. Use this structure to define two variables that point to each other. */

#include <stdio.h>

struct person{
    char name[BUFSIZ];
    char surname[BUFSIZ];
    struct person *pointer;
};

int main(void){
    struct person man = {"Julia", "Vasileva"};
    struct person woman = {"Viktor", "Vasilev"};

    man.pointer = &woman; 
    woman.pointer = &man;

    printf("Man's name is %s %s\n", man.pointer->name, man.pointer->surname);
    printf("Woman's name is %s %s\n", woman.pointer->name, woman.pointer->surname);

    return 0;
}

/* Prints Man's name is Viktor Vasilev
          Woman's name is Julia Vasileva */
