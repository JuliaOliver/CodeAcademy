/* Write a program to check if 2 strings (arrays) are anagrams 
and have all the letters of the other word. Use functions. */

#include <stdio.h>
#include <string.h>

int anagramCheck(char* firstString, char* secondString);

int main(){
    int (*functionPointer)(char *fs, char *ss);
    functionPointer = &anagramCheck;
    char firstString[50];
    char secondString[50];
    printf("Enter your first string: ");
    scanf("%s", &firstString);
    printf("Enter your second string: ");
    scanf("%s", &secondString);
    
    if ((*functionPointer)(firstString, secondString)){
        printf("'%s' and '%s' are anagrams", firstString, secondString);
    }
    else{
        printf("'%s' and '%s' are not anagrams", firstString, secondString);
    }
    return 0;
}

int anagramCheck(char* firstString, char* secondString){
    char temp1;
    char temp2;
    int len = strlen(firstString);

    if(strlen(firstString) != strlen(secondString)){
        return 0;
    }

    for (int i = 0; i < len-1; i++) {
		for (int j = i+1; j < len; j++) {
			if (firstString[i] > firstString[j]) {
					temp1 = firstString[i];
					firstString[i] = firstString[j];
					firstString[j] = temp1;
			}
		}
	}

    for (int i = 0; i < len-1; i++){
		for (int j = i+1; j < len; j++){
			if (secondString[i] > secondString[j]){
					temp2 = secondString[i];
					secondString[i] = secondString[j];
					secondString[j] = temp2;
			}
		}
	}

    for(int i = 0; i < len; i++){
        if(firstString[i] != secondString[i]){
            return 0;
        }
    }
 
    return 1;
}

/* Depending the entered input, prints the corresponding answer */
