#include <stdio.h>
#include <string.h>

enum getType{integer, string};
union numAndStr{
    int num;
    char text[32];
};

struct newValue{
    enum getType type;
    union numAndStr value;
};

void printValue(struct newValue* currentValue){
    if (integer == currentValue->type){
        printf("INT: %d\n", currentValue->value.num);
    } 
    else if (string == currentValue->type){
        printf("STR: %s\n", currentValue->value.text);
    }
}

int main(void){
    struct newValue value = {integer, 240795};
    printValue(&value);

    value.type = string;
    strcpy(value.value.text, "Hello World");
    printValue(&value);

    return 0;
}

/* Prints INT: 240795
          STR: Hello World */
