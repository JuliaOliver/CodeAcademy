/* Use the getchar () function to enter text from the keyboard until you type EOF (Ctrl + D). 
The text has letters and numbers. Count how many letters are entered and how many numbers are entered. 
Determine the number of digits in the string using the continue operator */

#include <stdio.h>

int main(void){
    int c;
    int numbersCount = 0;
    int lettersCount = 0;

    while((c = getchar()) != EOF){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            lettersCount += 1;
            continue;
        }
        else if(c >= '0' && c <= '9'){
            numbersCount += 1;
            continue;
        }
        printf("Count of numbers = %d\n", numbersCount);
        printf("Count of letters = %d\n", lettersCount);
    }
    
    return 0;
}

/* Prints the letters (a-zA-Z) count and the numbers (0-9) count after
pressing the 'enter' button. If we continue to enter another text and
again press 'enter' the new count is for all the lines of text, not
only for the last one. If we want to print the count only for the last line of
the input, we should declarate the two variables (lettersCount and numbersCount)
in the scope of the while loop before the other logic in it. */
