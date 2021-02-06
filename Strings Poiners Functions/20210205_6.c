/* Rewrite the void our_strcat (char * s, char * t) function from file 20210205_5.c 
using pointers, not the incrementing variables i, j. */

#include <stdio.h>
#include <string.h>

void our_strcat(char *s, char *t);

int main(void){
    char string[30];
    char toConcatenate[15];

    printf("Enter two strings to concatenate\n");
    printf("First string: ");
    scanf("%s", &string);
    printf("Second string: ");
    scanf("%s", &toConcatenate);

    our_strcat(string, toConcatenate);

    return 0;
}

void our_strcat(char *s, char *t){
    char *copy = s; /* assigning the pointer s to start, this step is necessary otherwise 
    we will lose track of the address of the beginning of the first string (s). */
    while(*s != '\0'){
        s++;
    }
    while(*t != '\0'){
        *s = *t;
        s++;
        t++;
    }

    *s = '\0';

    printf("New string: %s\n", copy);
}

/* Depending the entered input, prints the corresponding answer */
