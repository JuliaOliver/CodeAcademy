/* Write a program that counts spaces, tabs, and newlines. */

#include <stdio.h>

int main(void){
    int c;
    int counter = 0;
    int newLineCounter = 0;
    int spaceCounter = 0;
    int tabCounter = 0;
    c = getchar();
    while(c != EOF){
        if (c == '\n'){
            counter += 1;
            newLineCounter += 1;
        }

        else if(c == ' '){
            counter += 1;
            spaceCounter += 1;
        }
        else if(c == '\t'){
            counter += 1;
            tabCounter += 1;
        }
        
        c = getchar();
    }

    printf("Total count = %d\nLines count = %d\nSpace count = %d\nTabulations count = %d", counter, newLineCounter, spaceCounter, tabCounter);

    return 0;
}

/* Depending the entered input, prints the count of all spaces, tbas and new lines. */
