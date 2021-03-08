/* Write a program that reads a string from the standard input and 
outputs it to the standard output with the function gets (szBuf) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char szBuf[BUFSIZ] = {0};
    do{
        printf( "\nEnter a value: ");
        gets(szBuf);
        printf( "\nYou entered: ");
        puts(szBuf);
    } while (strlen(szBuf) > 0);
    
    return 0;
}
