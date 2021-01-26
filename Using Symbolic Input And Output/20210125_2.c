/* Count the lines in a text entered in the console. Use the getchar () function; */

#include <stdio.h>

int main(void){
    char c;
    int counter = 0;
    c = getchar();
    while(c != EOF){
        if (c == '\n'){
            counter += 1;
        }
        c = getchar();
    }

    printf("Lines count = %d", counter);

    return 0;
}

/* Depending the entered input, prints the count of all lines. */
