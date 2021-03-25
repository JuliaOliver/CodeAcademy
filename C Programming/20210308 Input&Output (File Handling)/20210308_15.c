/* Write a program that prints the contents of a file in reverse order. 
Use the fseek function to go to the end of the file. Use the ftell function 
to find the position of the pointer. Display the file in reverse order on the screen. */

#include <stdio.h>

int main(void){ 
    int currentPos = 0;
    int i = 0;
    FILE *filePtr = NULL;
    filePtr = fopen("testFile.txt", "r");

    fseek(filePtr, 0, SEEK_END);
    currentPos = ftell(filePtr);

    printf("Reversed content: \n");
    for(i = 1; i <= currentPos; i++){
        fseek(filePtr, -i, SEEK_END);
        printf("%c", fgetc(filePtr));
    }
    
    fclose(filePtr);
  
    return 0;
}
