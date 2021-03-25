/* Special symbolic literals */

#include <stdio.h>

int main(void) {
    int i;
    char arrEscChar[] = { '\t', '\n', '\r', '\v', '\\', '\'', '\"', '\?', '\a', '\b', '\f' };
    for (i = 0; i < sizeof(arrEscChar)/sizeof(char); i ++) {
        printf("Escape Character %d %c\n", (int)(arrEscChar[i]), arrEscChar[i]);
    }   
    return 0;
}

/*  Escape Character 9  
 
    Escape Character 10  

    Escape Character 13  
    Escape Character 11 ♂
    Escape Character 92 \
    Escape Character 39 '
    Escape Character 34 "
    Escape Character 63 ?
    Escape Character 7
    Escape Character 8
    Escape Character 12 ♀ */
