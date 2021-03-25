/* Implement conditional compilation depending on macro DEBUG 
(compiler macro definition: gcc -DDEBUG) */

#include <stdio.h>

void debugMsg(const char *pszMsg){
    #ifdef DEBUG
        printf("DEBUG: %s\n", pszMsg);
    #endif
}

int main(void){
    debugMsg("Debug!");
    return 0; 
}

/* Prints DEBUG: Debug! */
