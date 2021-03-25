/* Write a program that flips all the characters in a text file, capitalize 
the result in another temporary file. Then rename the new file with the name 
of the original file and delete the temporary name. Print the contents of a 
standard output file in capital letters. */

#include <stdio.h>
#include <ctype.h>

int main(void){ 
    char currentChar = ' ';
    FILE *filePtrIn = NULL;
    FILE *filePtrOut = NULL;
    filePtrIn = fopen("test2.txt", "r");
    filePtrOut = fopen("testNew.txt", "w+");

    currentChar = getc(filePtrIn);
    printf("New file: \n");
    while(!feof(filePtrIn)){
        currentChar = toupper(currentChar);
        printf("%c", currentChar);
        fputc(currentChar, filePtrOut);
        currentChar = getc(filePtrIn);
    }

    fclose(filePtrOut);
    fclose(filePtrIn);
   
    remove("test2.txt");
    rename("testNew.txt", "test2.txt");
    remove("testNew.txt");


    return 0;
}
