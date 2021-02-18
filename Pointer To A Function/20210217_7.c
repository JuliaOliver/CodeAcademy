#include <stdio.h>
#include <string.h>

int charCounter(char string[], char letter); 

int main(void){
    int (*functionPointer)(char[], char);
    functionPointer = &charCounter;
    char string[100];
    char c;
    char letter = 97;
    int totalLettersCount = 26;
    int i = 0;
    printf("Enter text to see how much times the letter 'a' occurs in it\n");

    while (c != '\n'){
        c = getchar();
        string[i] = c;
        i++;
    }
    
    for(i = 0; i < totalLettersCount; i++){
        int count = (*functionPointer)(string, letter);
        printf("\nThe count of the letters '%c' in the string is %d\n", letter, count);
        letter += 1;
    }

    return 0;
}

int charCounter(char string[], char letter){
    int counter = 0;
    int len = strlen(string);

    for(int i = 0; i < len; i++){
        if(string[i] == letter){
            counter += 1;
        }
    }
    return counter;
}

/* Depending the entered input, prints the count of the occurrences of each letter of the alphabet, in the string */
