/* Write a program that checks if the message is a palindrome. A palindrome is a message in which 
the letters from left to right are the same as from right to left. */

#include <stdio.h>

void isPalindrome(char *string);

int main(void){
    char letter;
    letter = getchar();
    char string[20];
    int i = 0;

    while (letter != '\n'){
        string[i] = letter;
        
        i++;
        letter = getchar();
    }
    
    isPalindrome(string);    

    return 0;
}

void isPalindrome(char *string){ 
    char *original, *reversed; 
  
    original = string; 
  
    while (*original != '\0') { 
        ++original; 
    } 
    --original;
  
    for (reversed = string; original >= reversed;) { 
        if (*original == *reversed) { 
            --original; 
            reversed++; 
        } 
        else
            break; 
    } 
  
    if (reversed > original) 
        printf("%s is Palindrome", string); 
    else
        printf("%s is not a Palindrome", string); 
}

/* Depending the eneted text, prints whether it is a palindrome or not */ 
