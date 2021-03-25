/* Write a program that copies its input to the output, 
replacing each string of one or more spaces with a single space
and if there is and "(" it puts ")" right after it */

#include <stdio.h>

int main(void){
    int c;
    int isTrue = 0;
    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\t'){
            if (isTrue == 0){
                isTrue = 1;
                putchar(' ');
            }
            else if (isTrue == 1){
                continue;
            }
        }
        else if (c == '('){
            putchar(c);
            putchar(')');
        }
        else{
            isTrue = 0;
            putchar(c);
        }   
    }
    return 0;
}

/* Prints the entered text with only one space between the words, and puts a ")" after "(" */ 
