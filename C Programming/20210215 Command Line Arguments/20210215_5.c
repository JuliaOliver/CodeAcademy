/* Define and initialize int variable = 34 and pointer to it. 
Try to rearrange them in order (first the pointer, then the variable). */

#include <stdio.h>

int main(void){
    int a = 34;
    int *pointerA = &a;
    printf("%d\n", *pointerA);

    int *pointerB;
    int b = 34;
    printf("%d\n", *pointerB);

    pointerB = &b;
    printf("%d\n", *pointerB); /* here we direct the pointerB to the variable b, */

    return 0;
}

/* Prints 34
          1446753 - this one is different every time the program is being runned
          34 */
