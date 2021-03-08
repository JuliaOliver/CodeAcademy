/* Open and read the contents of an fscanf file. int fscanf 
(FILE * stream, const char * format, ....) It has the same formats as scanf. 
The first argument is a pointer to the file from which we will read. 
The second argument is the format - The string can have the following 
parameters space, non-space, specifiers; */

#include <stdio.h>

int main(void){
    FILE *filePtr;
    FILE *filePtr2;

    filePtr = fopen("test.txt", "r"); /* test.txt -> Hello there! How are you? */
    fscanf(filePtr, "%s %s %s %s %s", filePtr[0], filePtr[1], filePtr[2], filePtr[3], filePtr[4]);

    return 0;
}
