/* Write an array of structures called kaytab [], using the one defined in file 20210226_6.c - 
a custom type key_t that contains a string and a number. Initialize the array with all C keywords. */

#include <stdio.h>
#include <stdlib.h>

#define cKeyWordsCount 32

typedef struct keyWord{char *c; int num;} t_keyWordStructure;

int main(void){
    int i;
    

    t_keyWordStructure myKeyWordsList[cKeyWordsCount] = {{"auto", 0}, {"break", 1}, {"case", 2}, {"char", 3}, { "continue", 4}, {"do", 5},\
    {"default", 6}, {"const", 7}, {"double", 8}, {"else", 9}, {"enum", 10}, {"extern", 11}, {"for", 12},\
    {"if", 13}, {"goto", 14}, {"float", 15}, {"int", 16}, {"long", 17}, {"register", 18}, {"return", 19},\
    {"signed", 20}, {"static", 21}, {"sizeof", 22}, {"short", 23}, {"struct", 24}, {"switch", 25}, {"typedef", 26},\
    {"union", 27}, {"void", 28}, {"while", 29}, {"volatile", 30}, {"unsigned", 31}};
    
    for(i = 0; i <cKeyWordsCount; i++){
        printf("Keyword %d - %s\n", myKeyWordsList[i].num, myKeyWordsList[i].c);
    }

    return 0;
}

/* Prints Keyword 0 - auto
          Keyword 1 - break
          Keyword 2 - case
          Keyword 3 - char
          Keyword 4 - continue
          Keyword 5 - do
          Keyword 6 - default
          Keyword 7 - const
          Keyword 8 - double
          Keyword 9 - else
          Keyword 10 - enum
          Keyword 11 - extern
          Keyword 12 - for
          Keyword 13 - if
          Keyword 14 - goto
          Keyword 15 - float
          Keyword 16 - int
          Keyword 17 - long
          Keyword 18 - register
          Keyword 19 - return
          Keyword 20 - signed
          Keyword 21 - static
          Keyword 22 - sizeof
          Keyword 23 - short
          Keyword 24 - struct
          Keyword 25 - switch
          Keyword 26 - typedef
          Keyword 27 - union
          Keyword 28 - void
          Keyword 29 - while
          Keyword 30 - volatile
          Keyword 31 - unsigned */
