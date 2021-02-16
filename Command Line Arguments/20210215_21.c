/* Write a function that sorts an array of characters (char []) alphabetically using qsort. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char c[]);
int cmpfunc( const void *a, const void *b);

int main(void){
    char letters[] = "tdvjyo";

    sort(letters);

    return 0;
}

int cmpfunc( const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

void sort(char c[]){
    qsort(c, (size_t) strlen(c), (size_t) sizeof(char), cmpfunc);;

    for(int i = 0; i < 6; i++){
        printf("%c\n", c[i]);
    }
}

/* Prints d
          j
          o
          t
          v
          y */
