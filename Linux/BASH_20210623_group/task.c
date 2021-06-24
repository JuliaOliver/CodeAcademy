/* Write a union of numbers and strings, as well as a descriptor with a countable 
type for the contents of the union. Write a function that gets a pointer to the 
union and the enumerated type and outputs a string or number, respectively. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

union numAndStr{
    int num;
    char text[32];
};

enum getType{integer, string};
int isAlpha(char *txt);
int isDigit(char *txt);


void printUnion(union numAndStr* element, enum getType type);

int main(int argc, char *argv[]){
    union numAndStr argument;
    if (isDigit(argv[1])){
        argument.num = atoi(argv[1]);
        printUnion(&argument, integer);
    }
    else if (isAlpha(argv[1])){
        strcpy(argument.text, argv[1]);
        printUnion(&argument, string);
    }
    else{
        exit(1);
    }

    return 0;
}

void printUnion(union numAndStr* element, enum getType type){
    if(integer == type){
        printf("Integer: %d\n", element->num);
    }
    else if(string == type){
        printf("String: %s\n", element->text);
    }
}

int isAlpha(char *txt){
    int len = strlen(txt);
    for (int i = 0; i < len ; i++){
        if ((txt[i] >= 'a' && txt[i] <= 'z') || (txt[i] >= 'A' && txt[i] <= 'Z')){
            continue;
        }
        else{ 
            return 0; 
        }
    }
    return 1;
}

int isDigit(char *txt){
    int len = strlen(txt);
    for (int i = 0; i < len ; i++){
        if (txt[i] >= '0' && txt[i] <= '9'){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}
