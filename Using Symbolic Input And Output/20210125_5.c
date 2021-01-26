/* Use the getchar() function to enter text from the keyboard until you enter EOF (‘?’).
The text has letters and numbers. Print only the entered letters with putchar().
Use the conditional operators to print with the putchar() only the 
lowercase letters of the Latin alphabet a - z, and the uppercase letters A - Z. */

#include <stdio.h>

int main(void){
    char c;
    c = getchar();
    while(c != '?'){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            putchar(c);
        }
        
        c = getchar();
    }
    return 0;
}

/* Prints only the letters from 'a' to 'z' and 'A' - 'Z' from the entered input
and no other symbols such as spaces, tabs, numbers or other symbols,
until the EOF - '?' is entered. */
