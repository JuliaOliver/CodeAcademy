/* We return to the code written in file 20210215_15.c. 
Let's now print the strings with decrement, starting back and forth.
* to - = * from -;
Check the ready-made strlen function. Consider how to check in the copy function 
whether the size of the string we are copying into is not less than the size 
of the string we are copying from, and what happens then. */

#include <stdio.h>
#include <string.h>

void copyString(char *to, char *from);

int main(void){
    char firstString[] = "A string to be copied";
    char secondString[50];

    memset(secondString, '\0', sizeof(secondString));

    int len;
    len = strlen(firstString);
    printf("Length: %d\n", len);

    copyString(&secondString [len-1], &firstString [len-1]);
    printf ("Copied string: %s\n", secondString);
    return 0;
}


void copyString(char *to, char *from){
    while(*from){
        *to-- = *from--;
    }
}

/* Prints Length: 21
          Copied string: A string to be copied */
