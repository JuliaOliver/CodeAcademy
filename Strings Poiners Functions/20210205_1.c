/* Write the function void  printStr (char * s) argument pointer to the beginning of the string. 
Use for loop and iterate through the string until you reach the string character '\ 0'. 
On every iteration, print each element of the string with printf ("%c", c). */

#include <stdio.h>

void printStr(char *string);

int main(void){
    char *string = "Hello World";
    printStr(string);
    return 0;
}

void printStr(char *string){
    int i = 0;
    for(i; string[i] != '\0'; i++){ /* for(; *string; string++) */
        printf("%c\n", string[i]);  /* printf("%c\n", *string)*/
    }
}

/* Prints every character of the string on new line */
