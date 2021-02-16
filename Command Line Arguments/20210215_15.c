/* We will copy strings. Define and initialize two strings:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Also define two empty strings in which we will copy string 2,
string4. Define a function that will perform through pointers
copying from string to string. Use while and the fact that
* pointer ++ goes to the next character.
Think of the termination symbol. Print the two copied
thong.
Call the function and copy from string1 to string4. */

#include <stdio.h>

void copyString(char *to, char *from);

int main(void){
    char firstString[] = "A string to be copied";
    char secondString[50];

    copyString(secondString, firstString);
    printf ("Copied string: %s\n", secondString);

    char thirdString[] = "I am very good in strings coping!";
    char fourthString[50];

    copyString(fourthString, thirdString);
    printf ("Copied string: %s\n", fourthString);

    copyString(fourthString, firstString);
    printf ("Copied string: %s\n", fourthString);

    return 0;
}

void copyString(char *to, char *from){
    while(*from){
        *to++ = *from++;
    }
    
    *to = '\0';

}

/* Prints Copied string: A string to be copied
          Copied string: I am very good in strings coping!
          Copied string: A string to be copied */
