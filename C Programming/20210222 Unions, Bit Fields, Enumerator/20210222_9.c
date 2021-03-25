/* Write a function that converts a number to a string and a 
string to a number using the task description in file 20210222_8.c. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union numAndStr{
    int num;
    char text[32];
};

enum getType{integer, string};

void convertPrint(union numAndStr* element, enum getType type){
    if(integer == type){
        char buff[32];
        printf("Convert %d to '%s'\n", element->num, itoa(element->num, buff, 10));
    }
    else if(string == type){
        printf("Convert '%s' to %d\n", element->text, atoi(element->text));
    }
}

int main(void){
    union numAndStr argument;
    strcpy(argument.text, "950724");
    convertPrint(&argument, string);

    argument.num = 240795;
    convertPrint(&argument, integer);

    return 0;
}

/* Prints Convert '950724' to 950724
          Convert 240795 to '240795' */
