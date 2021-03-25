/* Write the function int any (char firstString [], char secondString []), which returns the first position 
in the string firstString, where one of the characters in the string secondString appears 
(The standard library function strpbrk performs this function) */

#include <stdio.h>
#include <string.h>

int any(char firstString[], char secondString[]);

int main(void){
    char first[50];
    char second[50];
    printf("Enter a strings and a word, to see the first position at which there is a match between them.\n");
    printf("String: ");
    scanf("%[^\n]", &first);
    printf("\nWord to check: ");
    scanf("%s", &second);

    int position = any(first, second);

    if (position >= 0){
        printf("\nFirst match is at position: %d\n", position);
    }
    else{
        printf("\nNo such position, zero matches!\n");
    }

    return 0;
}

int any(char firstString[], char secondString[]){
    int i;
    int j;
    int firstLength = strlen(firstString);
    int secondLength = strlen(secondString);

    for(i = 0; i < firstLength; i++){
        for(j = 0; j < secondLength; j++){
            if(i == firstLength - 1 && j == secondLength - 1 && firstString[i] != secondString[j]){
                return -1;
            }
            if(firstString[i] == secondString[j]){
                return i;
            }
        }
    }
}

/* Prints the first position of the first string where there is a match, if any */
