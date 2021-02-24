/* Use predefined macros */

#include <stdio.h>

int main() {
    printf("File : %s\n", __FILE__ );
    printf("Date : %s\n", __DATE__ );
    printf("Time : %s\n", __TIME__ );
    printf("Line : %d\n", __LINE__ );
    printf("ANSI : %d\n", __STDC__ );

    return 0;
}

/* Prints File : problem_4.c
          Date : Feb 24 2021
          Time : 12:21:46
          Line : 7
          ANSI : 1 */
