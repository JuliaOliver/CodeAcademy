/* Write a union of three values: an integer, a floating point number, and a string. 
Initialize the individual members and display them on the screen.  */

#include <stdio.h>

union threeElements{
    int num;
    float floatNum;
    char text[32];
};

int main(void){
    union threeElements info = {.num = 10, .floatNum = 24.07, .text = "Hello World"};
    printf("Number: %i\nFloating point number: %f\nText: %s\n", info.num, info.floatNum, info.text);

    return 0;
}

/* Prints Number: 1819043144
          Floating point number: 1143139122437582500000000000.000000
          Text: Hello World */
