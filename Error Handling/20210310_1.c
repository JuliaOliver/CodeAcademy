/* Write a program that compares two files by printing the first line on which the two files differ. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINE 1000

void differentLine(char *lineone, char *linetwo, int linenumber);

int main(int argc, char *argv[]){
    FILE *fp1, *fp2;
    char fp1_line[MAXLINE], fp2_line[MAXLINE];
    int i;

    if (argc != 3){
        printf("Difference File One File Two\n");
        exit(0);
    }

    fp1 = fopen(argv[1], "r");
    if (!fp1){
        printf("Error opening file %s\n", argv[1]);
    }

    fp2 = fopen(argv[2], "r");
    if (!fp2){
        printf("Error opening file %s\n", argv[2]);
    }

    i = 0;
    while ((fgets(fp1_line, MAXLINE, fp1) != NULL) && (fgets(fp2_line, MAXLINE, fp2) != NULL)){
        differentLine(fp1_line, fp2_line, i);
        i++;
    }

    return 0;
}

void differentLine(char *lineone, char *linetwo, int linenumber){
    if(strcmp (lineone, linetwo) < 0 || strcmp (lineone, linetwo) > 0){
        printf( "%d<%s\n%d>%s\n", linenumber, lineone, linenumber, linetwo);
    }    
}
