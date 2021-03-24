/* Write a function with the prototype my_swap (a, b), which exchanges the values of two integers 
without using an auxiliary variable (for example: * a = * a + * b; * b = * a - * b; * a = * a - * b). */

#include <stdio.h>

int my_swap(int a, int b);

int main(void){
    int a = 10;
    int b = 20;
   
    printf("Before swapping:\na = %d, b = %d\n", a, b);
    my_swap(a, b);

    return 0;
}

int my_swap(int a, int b){
    int *pA = NULL;
    pA = &a;

    int *pB = NULL;
    pB = &b; 

    *pA = *pA + *pB; 
    *pB = *pA - *pB; 
    *pA = *pA - *pB;

    a = *pA;
    b = *pB;
    printf("After swapping:\na = %d, b = %d\n", a, b);
}

/* Prints Before swapping:
          a = 10, b = 20
          After swapping:
          a = 20, b = 10 */
