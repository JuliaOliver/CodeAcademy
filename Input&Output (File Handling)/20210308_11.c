/* Do the same using fgetpos (). int fgetpos (FILE * pfile, fpos_t * position); 
The first parameter is a pointer to the file, the second parameter is a pointer 
to a standard parameter defined in stdio.h The type fpos_t can write any position 
in the file. The function returns 0 on success and different from 0 on error. 
Define a variable for fpos_t. */

#include <stdio.h>

int main(void){
    FILE *filePtr;
    fpos_t position;

    filePtr = fopen("E:\\CodeAcademy\\HomeWorks\\InputOutput\\testFile.txt", "w+");

    fputs("Hello there! ", filePtr);
    fputs("How are you?", filePtr);

    fgetpos(filePtr, &position);
    printf("%d", position);

    fclose(filePtr);
    filePtr = NULL;

    return 0;
}
