/* Write the function size_t my_strlen (char * s), which returns the length 
of the string passed in it. Iterate over the array until you reach the end of string '\0'. 
Increase in one variable of type size_t the value for each iteration. 
Size_t is usually unsignet long int as size. Return the variable as a result of the function. */

#include <stdio.h>

size_t my_strlen(char *string);

int main(void){
    char *string = "Hello World";
    printf("String length = %d", my_strlen(string));
    return 0;
}

size_t my_strlen(char *string){
    size_t counter = 0;
    int i = 0;
    for(i; string[i] != '\0'; i++){
        counter++;
    }

    return counter;
}

/* Prints String length = 11 */
