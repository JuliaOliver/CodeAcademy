/* Write a macro that connects two identifiers into one common one (concatenation of identifiers) */

#include <stdio.h>

#define MY_CONCAT(x,y) x##y

int main(int argc, char *argv[]){
    char *text = argv[1];
    MY_CONCAT(print,f)(text);
    printf("\n");
    return 0;
}
