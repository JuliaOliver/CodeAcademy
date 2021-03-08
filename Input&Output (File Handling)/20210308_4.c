/* Read the string from the created file. char * fgets (char * str, int nchars, FILE * stream) 
the first parameter is a string, the second parameter is the number of characters we want to 
read, unless the terminating character reaches the end of the line \ n or \ 0 first, 
the third is pointer to the file */

#include <stdio.h>

int main(void){
    FILE *fp;
    char str[20];
    fp = fopen("testFile.txt", "rt");
    if(fp== NULL){
        perror ("Error opening file");
        return(-1);
    }
    if(fgets(str,20,fp)!= NULL){
        printf("%s",str);
    }

    fclose(fp);
    fp=NULL;
  
    return 0;
}
