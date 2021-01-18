/* Write an int isLetter (char c) function that checks whether 
the specified parameter is a letter or not a letter from the ASCII table. */

#include <stdio.h>

int isLetter(char c);

int main(void){
    char c;
    printf("Enter a character: ");

    char cValue = isLetter(scanf("%d", &c));

    if ((cValue >= 'a' && cValue <= 'z') || (cValue >= 'A' && cValue <= 'Z')){
        printf("The character with ASCII number %d is an alphabet - %c.", cValue, cValue);
    }
    else{
        printf("The character with ASCII number %d is not an alphabet - %c.", cValue, cValue);
    }

    return 0;
}

int isLetter(char c){
    return c = getchar();
}
