/* Do the same as in file 20210215_15.c, but using the ready-made strcpy function. 
Find out online how this feature works and what arguments it accepts */

#include <stdio.h>
#include <string.h>

int main(void){
    char firstString[] = "A string to be copied";
    char secondString[50];

    strcpy(secondString, firstString);
    printf ("Copied string: %s\n", secondString);

    char thirdString[] = "I am very good in strings coping!";
    char fourthString[50];

    strcpy(fourthString, thirdString);
    printf ("Copied string: %s\n", fourthString);

    strcpy(fourthString, firstString);
    printf ("Copied string: %s\n", fourthString);

    return 0;
}

/* Prints Copied string: A string to be copied
          Copied string: I am very good in strings coping!
          Copied string: A string to be copied */
