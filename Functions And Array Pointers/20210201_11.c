/* Write a void squeeze function (char s [], int c) that removes the character c from the string s [] */

#include <stdio.h>

void squeeze(char string[], int character);

int main(void){
    char string[100];
    int character;
    printf("Enter text and symbol you want to remove from it!\n");
    
    printf("Text: ");
    scanf("%[^\n]", &string);
    printf("\nSymbol: ");
    scanf("%s", &character);

    squeeze(string, character);

    return 0;
}

void squeeze(char string[], int character){
    int i = 0;
    int j = 0;
    for (i; string[i] != '\0'; i++){
        if (string[i] != character){
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
    printf("\nChanged string: %s\n", string);
}

/* Prints the entered text, removing the entered character */
