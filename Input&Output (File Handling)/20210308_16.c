/* Write a program that removes a line number from a file and removes 
that line from the file. (Hint: Do not delete from the original file, 
but save the contents of the file without the specific line to another file). */

#include <stdio.h>

int main(void){
    FILE *filePtrIn = NULL;
    FILE *filePtrOut = NULL;
    int totalLines = 1;
    int lineToRemove = 0;
    char str[100];

    filePtrIn = fopen("test.txt", "r+");
    filePtrOut = fopen("testRemove.txt", "w+");

    while(!feof(filePtrIn)){ 
        int currentChar = 0;
        currentChar = fgetc(filePtrIn);
        if(currentChar == '\n'){
            totalLines++;
        }
    }

    printf("The file has %d lines, which one do you want to remove?: ", totalLines);
    scanf("%d", &lineToRemove);
    totalLines = 1;
    fseek(filePtrIn, 0, SEEK_SET);

    while(fgets(str, 512, filePtrIn) != NULL){ 
        if(totalLines != lineToRemove){
            fputs(str, filePtrOut);
        }
        totalLines++;
    }

    fclose(filePtrIn);
    fclose(filePtrOut);

    return 0;
}
