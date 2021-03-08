/* Create a test1.txt file in a directory of your choice. Put some data in it in 
Latin - name, greeting, number. Open to read. Use fgetc (), which takes only 
one char from the file. Make a while loop to write all the characters, check 
for the end of the EOF file. Check that the file pointer is not NULL, if it is NULL, type an error. */

#include <stdio.h>

int main(void){
    FILE *fp;
    int c;
    fp = fopen("testFile.txt","r");
    if(fp==NULL){
        perror ("Error in opening file");
        return (-1);
    }
    while ((c=fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp=NULL;
    
    return 0;
}
