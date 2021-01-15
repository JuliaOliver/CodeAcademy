/* Strings */

#include <stdio.h>

const char* c_szText =
"Here are "
"instructions for "
"the program.\n";
int main() {
    printf("Help: %s", c_szText);
    return 0;
}

/* Prints Help: Here are instructions for the program. */
/* Concatenates lines 6, 7 and 8 in one string */
