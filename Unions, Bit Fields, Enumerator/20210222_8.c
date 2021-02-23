/* Write a union of numbers and strings, as well as a descriptor with a countable 
type for the contents of the union. Write a function that gets a pointer to the 
union and the enumerated type and outputs a string or number, respectively. */

#include <stdio.h>
#include <string.h>

union numAndStr{
    int num;
    char text[32];
};

enum getType{integer, string};

void printUnion(union numAndStr* element, enum getType type){
    if(integer == type){
        printf("Integer: %d\n", element->num);
    }
    else if(string == type){
        printf("String: %s\n", element->text);
    }
}

int main(void){
    union numAndStr argument;
    strcpy(argument.text, "Hello World");
    printUnion(&argument, string);

    argument.num = 240795;
    printUnion(&argument, integer);

    return 0;
}

/* Prints String: Hello World
          Integer: 240795 */
