/* Make a union with elements of type int, int, char. Give the values of the 
elements one by one -7, 10 and "c" and display these values on the console. */

#include <stdio.h>

union threeElements{
    int firstInt;
    int secondInt;
    char text[32];
};

int main(void){
    union threeElements info = {.firstInt = -7, .secondInt = 10, .text = "c"};
    printf("First number: %i\nSecond number: %d\nText: %s\n", info.firstInt, info.secondInt, info.text);

    return 0;
}

/* Prints First number: 99
          Second number: 99
          Text: c */
