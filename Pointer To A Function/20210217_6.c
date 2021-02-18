#include <stdio.h>
#include <string.h>

int charCounter(char string[]); 

int main(void){
    int (*functionPointer)(char[]);
    functionPointer = &charCounter;
    char string[100];
    char c;
    int i = 0;
    printf("Enter text to see how much times the letter 'a' occurs in it\n");

    while (c != '\n'){
        c = getchar();
        string[i] = c;
        i++;
    }
    
    int count = (*functionPointer)(string);

    printf("\nThe count of the letters 'a' in the string is %d\n", count);

    return 0;
}

int charCounter(char string[]){
    int counter = 0;
    int len = strlen(string);

    for(int i = 0; i < len; i++){
        if(string[i] == 'a'){
            counter += 1;
        }
    }
    return counter;
}

/* Depending the entered input, prints the corresponding answer */
