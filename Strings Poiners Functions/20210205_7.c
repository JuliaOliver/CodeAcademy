/* Write the function strend (s, t), which returns 1 if the string t occurs 
at the end of the string s and 0 if this is not satisfied. */

#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

int main(void){
    char string[30];
    char toCheck[15];

    printf("Enter two strings to concatenate\n");
    printf("First string: ");
    scanf("%s", &string);
    printf("Second string: ");
    scanf("%s", &toCheck);

    int res = strend(string, toCheck);
    printf("%d", res);

    return 0;
}

int strend(char *s, char *t){
    while(*s++){  
        if(*t == *s){
            while((*s++ == *t++) && (*t != '\0'));
            if(*s == '\0' && *t == '\0')
                return 1;
            return 0;
        }
    }
    return 0;
}

/* Depending the entered input, prints the corresponding answer */
