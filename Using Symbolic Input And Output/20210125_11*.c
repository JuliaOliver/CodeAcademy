/* Write a function void reverse (char s []) that inverts the string char s []. 
Use a for loop with two arguments separated by a comma 
i = 0, j = strlen (s) - 1; i <j; i ++, j-- to reverse the string. */

#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(void){
    char s[] = "Random string to be reversed!";
    reverse(s);

}

void reverse(char s[]){
    int stringLength = strlen(s);
    char reversedStr[stringLength];
    for(int i = 0, j = strlen(s) - 1; i < strlen(s); i++, j--){
        reversedStr[i] = s[j];
    }    
    printf("%s\n", reversedStr);
    
}

/* Prints !desrever eb ot gnirts modnaR*/
