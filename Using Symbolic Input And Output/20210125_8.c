/* Use the getchar() function to enter text from the keyboard until you type EOF (Ctrl + D). 
The text has letters and numbers. Print with putchar(). 
Use conditional operators to remove the spaces and the tabs in the string */

#include <stdio.h>

int main(void){
    char c;
    
    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\t'){
            continue;
        }

        putchar(c);
    }
    return 0;
}

/* Prints the entered text, without the spaces and the tabs in it */
