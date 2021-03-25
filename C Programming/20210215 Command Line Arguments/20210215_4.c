/* Define a pointer and try to print its value to the console (% p) with printf.
What is visualized? */

#include <stdio.h>

int main(void){
    int a = 15;

    int *pointer; /* pointer declaration */
    printf("%p\n", pointer);

    pointer = &a; /* pointer initialization */
    printf("%p\n", pointer);

    return 0;
}

/* Prints 0000000000000010
          000000000061FE14 */
