/* Create a test.txt file in a directory of your choice. Put some data in it in 
Latin - name, greeting, number. Open the file for editing. Be careful where you 
place the file. It should be where the source file is. */

#include <stdio.h>

int main(void){
    FILE *pfile = NULL;
    char*filename = "test_file.txt";
    pfile = fopen(filename, "rt");

    if(pfile == NULL){
        printf("Failed to open %s.\n" ,filename);
    }

    fclose (pfile);
    pfile = NULL;

    if(rename ("E:\\CodeAcademy\\HomeWorks\\InputOutput\\test_file.txt", "E:\\CodeAcademy\\HomeWorks\\InputOutput\\new_test.txt")){
        printf("File renamed successfully.");
    }
    else{
        printf("Failed to rename file.");
    }

    remove ("new_test.txt");
    
    return 0;
}
