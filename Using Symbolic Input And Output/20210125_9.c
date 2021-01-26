/* Use the getchar () function to enter text from the keyboard until you type EOF (Ctrl + D). 
The text is printed with putchar (), converting uppercase letters to lowercase. */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char c;
    c = getchar();
    while(c != EOF){
        if (c >= 'A' && c <= 'Z'){
            putchar(tolower(c));
        }
        else{
            putchar(c);
        }
        c = getchar();
    }
    return 0;
}

/* Prints the input text all lowercase */
