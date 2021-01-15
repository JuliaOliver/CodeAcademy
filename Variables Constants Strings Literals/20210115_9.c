/* Write a program that calculates how many characters there are 
in a string before the end of the string, denoted by the character ‘\ 0’. */

#include <stdio.h>

int main() {
    
    char s[ ] = "Hi";
    int i = 0;
    for (i = 0; s[i] != '\0'; i ++){
        printf("%c\n", s[i]);
    }
    printf("%d", i);
    return 0;
}

/* Prints  H
           i
           2*/
