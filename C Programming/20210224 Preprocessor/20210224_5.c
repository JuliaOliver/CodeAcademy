/* Write a macro with one parameter that prints a message only with a DEBUG macro defined. 
If DEBUG is not defined, it does not print anything. */

#include <stdio.h>

#ifdef DEBUG
    #define DEBUGMSG(msg) \
    {printf("DEBUG: %s\n", (msg));}
#else
    #define DEBUGMSG(msg)
#endif 

int main(void){
    DEBUGMSG("Debug!");
    return 0; 
}
