/* Write the function strncpy (s, t, n), which copies at most n characters from t to s. */

#include <stdio.h>

void strCopy(char *copy, char *original, int n);

int main(void){
    char *original = "Hello World";
    char copy[20];
    int n = 4;

    strCopy(copy, original, n);

    return 0;
}

void strCopy(char *copy, char *original, int n){
    int i = 0;
    while(n > 0){
        copy[i] = original[i];
        i++;
        n--;
    }

    printf("Original string: %s\nCopied string: %s", original, copy);
}

/* Prints Original string: Hello World
          Copied string: Hell */
