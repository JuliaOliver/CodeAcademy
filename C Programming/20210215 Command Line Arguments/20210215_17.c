/* Do the same as in file 20210215_16.c, but before copying, reset the value of the strings 
in which you will copy using the ready-made memset function. Find out online how 
this feature works and what arguments it accepts. */

#include <stdio.h>
#include <string.h>

int main(void){
    char firstString[] = "A string to be copied";
    char secondString[50];

    memset(secondString, '\0', sizeof(secondString));
    strcpy(secondString, firstString);
    printf ("Copied string: %s\n", secondString);

    char thirdString[] = "I am very good in strings coping!";
    char fourthString[50];

    memset(fourthString, '\0', sizeof(fourthString));
    strcpy(fourthString, thirdString);
    printf ("Copied string: %s\n", fourthString);

    memset(fourthString, '\0', sizeof(fourthString));
    strcpy(fourthString, firstString);
    printf ("Copied string: %s\n", fourthString);

    return 0;
}

/* Prints Copied string: A string to be copied
          Copied string: I am very good in strings coping!
          Copied string: A string to be copied */
