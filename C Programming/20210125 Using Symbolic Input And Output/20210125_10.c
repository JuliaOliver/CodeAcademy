/* Write a function reverse (s) that inverts the string s. 
Use it to write a program that flips your input line by line. */

#include <stdio.h>
#include <string.h>

void reverse(char text[]);
int lineLastIndex;
char text[10000];


int main(void){
    char c;
    int counter = 0;    

    c = getchar();    
    while(c != EOF){
        text[counter] = c;
        counter += 1;
        if (c == '\n'){
            reverse(text);
            counter = 0;
            text[0] = '\0';
        }

        c = getchar(); 
    }
    return 0;
}

void reverse(char text[]){
    int stringLength = strlen(text);
    char reversedStr[stringLength];
    for(int i = 0, j = strlen(text) - 1; i < strlen(text) + 1; i++, j--){
        reversedStr[i] = text[j];
    }    
    printf("%s\n\n", reversedStr);
}

/* Prints every single line reversed, until the EOF is entered */
