/* Write an function int getline(char s [], int lim) that reads a line in s[] and returns its length */

#include <stdio.h>

int getline(char string[], int limit);

int main(void){
    int limit;
    printf("Enter a string limit: ");
    scanf("%d", &limit);
    char string[limit];
    printf("Enter a string: ");
    scanf("%s", &string);

    printf("String length = %d", getline(string, limit));

    return 0;
}

int getline(char string[], int limit){
    int length;
    int i = 0;
    while (string[i] != '\0'){
        i++;
    }
    length = i;
    return length;
}

/* Prints the length of the entered string */
