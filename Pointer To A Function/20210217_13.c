/* Write a program that reads the string from the user and reverses it.
For example: 'xyz' to become 'zyx' */

#include <stdio.h>
#include <string.h>

void reverse(char string[]);

int main(void){
    void (*functionPointer)(char[]);
    functionPointer = &reverse;
    char string[50];
    printf("Enter a string to reverse - up to 50 characters!\nString to reverse: ");
    scanf("%[^\n]", &string); /* Using this synatx ("%[^\n]") so the entered input can contain spaces */
    (*functionPointer)(string);
    
    return 0;
}

void reverse(char string[]){
    int character;
    int i;
    int j;

    for(i = 0, j = strlen(string) - 1; i < j; i++, j--){
        character = string[i];
        string[i] = string[j];
        string[j] = character;
    }
    printf("Reversed string is: %s", string);
}

/* Prints the entered string, reversed */
