/* Write a string in a text file. int fputs (const char * str, FILE * pfile); 
The first parameter is a pointer to the string we want to write, the second 
parameter is a pointer to the file in which we will write. The function will 
write characters from the string until it reaches the terminating character \0, 
but does not write it in the new file. */

#include <stdio.h>

int main(void){
    int c;
    FILE *fp=NULL;
    fp=fopen("test.txt", "wt+");

    if(fp == NULL){
        printf("Opening failed!");
    }

    fputs("Hello there! ",fp);
    fputs("How are you?",fp);

    fclose(fp);

    return 0;
}

/* Creates a test.txt file which contains the text "Hello there! How are you?" */
