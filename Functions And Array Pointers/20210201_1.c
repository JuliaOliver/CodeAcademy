/* Write a function that prints a string, the pointer to its beginning is passed as 
an argument to the function void printstr (char *s); Remember, the string always ends 
with a terminating zero '\0', so the check in the loop that prints each character 
must be until that character is reached. */

#include <stdio.h>

void printStr(char *string);

int main(void){
    
    char string[] = "Hello world!";
    /* If we want to take the string from input - scanf("%[^\n]", &string);  
    Using this synatx ("%[^\n]") so the entered input can contain spaces */
    printStr(string);

    return 0;
}

void printStr(char *string){
    int i = 0;
    while (string[i] != '\0'){     /* Possible syntax: while(*string != '\0') */
       printf("%c\n", string[i]);  /* Possible syntax: *string */
       i += 1;                     /* Possible syntax: *string ++ */
    }
}

/* Prints every character of the string on a new line */
