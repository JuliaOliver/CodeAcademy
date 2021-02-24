/* Write a macro that connects two identifiers into one common one (concatenation of identifiers) */

#include <stdio.h>

#define MY_CONCAT(x,y) x##y

int main() {
    MY_CONCAT(print,f)("Concatenates 'print' and 'f', so this message could be printed!");
    return 0;
}

/* Prints Concatenates 'print' and 'f', so this message could be printed! */
