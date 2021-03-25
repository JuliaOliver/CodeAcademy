/* What's wrong with this code? */


#include <stdio.h>

void my_strcpy(char *t, char *s);

int main(void){
    char *s = "Hello World";
    char *t = "Longer string than the previous";
    strCopy(t, s);
    return 0;
}

void my_strcpy(char *t, char *s){
    for(; *t; t++, s++)
    *s = *t;
}

/* It is wrong to check the end of the string before assigning the value of the last element. */
