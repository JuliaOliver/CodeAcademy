/* Write the function void lower (char s []), which converts uppercase letters to lowercase. */

#include <stdio.h>

void lower(char string[]);

int main(void){
    char text[100];
    printf("Enter text to convert it all to lowercase.\n");
    printf("Text: ");
    scanf("%[^\n]", &text);

    lower(text);

    return 0;
}

void lower(char string[]){
    int i;
    for (i = 0; string[i]!='\0'; i++) {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + 32;
        }
    }
    printf("\nString in LowerCase = %s\n", string);
}

/* Prints all the text lowercase */
