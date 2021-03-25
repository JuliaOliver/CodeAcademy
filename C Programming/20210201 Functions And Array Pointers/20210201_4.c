/* Make the function: void copy (char * to, char * from), which copies one sequence of characters to another. 
Declare the array to copy so char * from = "abcdef" or so char from [] = "abcdef" is the same. 
The first is a pointer pointing to a string constant, the second is the beginning of an array pointing to it. 
Make room for the array in which you will copy these characters with a declaration to char to [16]; 
Copy character by character the array from [] to to [] until you reach the character '\0' terminating zero
a string end character. The terminating character '\0' has a value of 0. */

#include <stdio.h>

void copy(char *to, char *from);

int main(void){
    char *from = "abcdef";
    char to[16];
    copy(to, from);

    return 0;
} 

void copy(char *to, char *from){
    int i = 0;
    for(i; from[i] != '\0' ; i++){
        to[i] = from[i];
    }
    printf("From: %s\nTo: %s", from, to);
}

/* Prints From: abcdef
          To: abcdef */
