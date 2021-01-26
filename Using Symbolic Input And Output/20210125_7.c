/* Use the getchar () function to enter text from the keyboard until you type EOF (Ctrl + D). 
The text should print only input lines that are longer than 80 characters. */

#include <stdio.h>

int main(void){
    char c;
    int counter = 0;
    c = getchar();
    char text[10000];
    while(c != EOF){
        counter += 1;
        text[counter-1] = c;
        if (c == '\n' && counter > 81){
            printf("%s", text);
            counter = 0;
            text[0] = '\0';
        }
        else if (c == '\n' && counter <= 81){
            counter = 0;
            text[0] = '\0';
        }
        c = getchar();
    }

    return 0;
}

/* Prints the line, only if it has more than 80 characters (without the '\n') */
