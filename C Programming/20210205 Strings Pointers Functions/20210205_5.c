/* Write the function void our_strcat (char *s, char *t), which adds (concatenates) 
the string t at the end of the string s. One for a loop must reach the end of the 
string s and then the elements of the string t must be copied on each subsequent iteration. 
The strcat () function assumes that there is enough space in s to copy all the values of the string t, 
because otherwise the assignment operator may run outside the array size and we have an error. 
But we haven't looked at dynamic memory allocation with malloc. */

#include <stdio.h>

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
    int i = 0;
    int j = 0;
    for(i; s[i] != '\0'; i++);

    for(j; t[j] != '\0'; i++, j++){
        s[i] = t[j];
    }

    s[i] = '\0';

    printf("New string: %s", s);
}

/* Depending the entered input, prints the corresponding answer */
