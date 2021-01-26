/* Count the characters entered in the console with the getchar() function */

#include <stdio.h>

int main(void){
    char c;
    int counter = 0;
    c = getchar();
    while(c != EOF){
        counter += 1;
        c = getchar();
    }

    printf("Symbols count = %d", counter);

    return 0;
}

/* Depending the entered input, prints the count of all the symbols (ENTER button - representing new line, inclusive) */
