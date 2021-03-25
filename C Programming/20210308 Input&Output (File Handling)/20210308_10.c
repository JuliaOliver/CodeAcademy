/* Find your position in the file. long ftell (FILE * pfile); The function takes 
a pointer to the file as a parameter and returns a long int that corresponds 
to the position in the file. You define the variable long fpos = ftell (pfile). 
The variable stores your current position in bytes from the beginning of the 
file and you can return to it at any time. */

#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("E:\\CodeAcademy\\HomeWorks\\InputOutput\\newTest.txt", "wt");
    fputs("Hello there!", fp);
    fputs("How are you?", fp);

    long fpos = ftell(fp);
    printf("Position %ld", fpos);

    fclose(fp);
    fp = NULL;

    return 0;
}
