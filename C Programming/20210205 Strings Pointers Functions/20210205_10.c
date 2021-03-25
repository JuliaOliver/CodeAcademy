/* Write the function strncat (s, t, n), which adds (concatenates) 
n characters from the string t at the end of the string s. */

#include <stdio.h>

void our_strcat(char *s, char *t, int n);

int main(void){
    char string[30] = "Hello";
    char toConcatenate[15] = "World2021";
    int n = 5;

    our_strcat(string, toConcatenate, n);

    return 0;
}

void our_strcat(char *s, char *t, int n){
    int i = 0;
    int j = 0;
    for(i; s[i] != '\0'; i++);

    while(n > 0){
        s[i] = t[j];
        i++;
        j++;
        n--;
    }

    s[i] = '\0';

    printf("New string: %s", s);
}

/* Prints New string: HelloWorld */
