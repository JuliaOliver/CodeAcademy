/* Write the symbol in a text file. Int fputc (int ch, FILE * pfile); 
The first parameter is the character we want to print (expressed as int, 
ie a number in the ASCII table), the second is the file itself in which 
we will write. If successful, the function returns what we want to write. 
In case of an error, the function returns EOF. putc () works with the same 
arguments, but is defined as a macro in the standard library. */

#include <stdio.h>

int main(void){
    FILE *filePtr;
    int ch;
    filePtr = fopen("testFile.txt", "wt+");

    for(ch=43; ch<= 100; ch++){
        fputc(ch, filePtr);
    }
    
    fclose(filePtr);
    
    return 0;
}
