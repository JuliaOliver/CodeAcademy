/* Write a program to find the total number of lines in a text file. 
Create a file that contains several lines of text. Be careful where you 
position the file. Open the file. Use a variable to count the number of rows. */

#include <stdio.h>

int main(void){
    int counter = 1;
    int str = 0;

    FILE *filePtr = NULL;
    filePtr = fopen("test.txt", "r");

    while(!feof(filePtr)){ 
        str = fgetc(filePtr);
        if(str == '\n')
        {
            counter++;
        }
    }

    printf("Lines in file: %d", counter);
    fclose(filePtr);

    return 0;
}
