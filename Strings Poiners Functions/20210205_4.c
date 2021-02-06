/* Write the function int our_strcmp (char *s, char *t), which compares the strings s and t 
and returns zero 0 if the two strings are equal. If the element in which they differ s[i] is less than t[i] 
returns a value less than zero < 0. If s[i] is greater than t[i] returns a value greater than zero> 0 . */

#include <stdio.h>

int our_strcmp(char *s, char *t);

int main(void){
    char firstString[20];
    char secondString[20];
    int comparison;

    printf("Enter two strings to compare\n");
    printf("First string: ");
    scanf("%s", &firstString);
    printf("Second string: ");
    scanf("%s", &secondString);

    comparison = our_strcmp(firstString, secondString);
    printf("\nComparison = %d", comparison);

    return 0;
}

int our_strcmp(char *s, char *t){
    int i = 0;
    for(i; s[i] == t[i]; i++){
        if(s[i] == '\0'){
            return 0;
        }
    return s[i] - t[i];
    }
}

/* Depending the entered input, prints the corresponding answer */
