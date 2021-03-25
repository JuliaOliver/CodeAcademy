/* Write a function void reverse (char s []) that inverts the string char s []. 
Use a for loop with two arguments separated by a comma i = 0, j = strlen (s) - 1; i <j; i ++, j-- to reverse the string. */

#include <stdio.h>
#include <string.h>

void reverse(char string[]);

int main(void){
    char string[50];
    printf("Enter a string to reverse - up to 50 characters!\nString to reverse: ");
    scanf("%[^\n]", &string); /* Using this synatx ("%[^\n]") so the entered input can contain spaces */
    reverse(string);
    
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
