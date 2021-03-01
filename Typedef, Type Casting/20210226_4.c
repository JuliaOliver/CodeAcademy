/* Define a function that collects two variables and accepts and executes a predefined pointer as a value. */

#include <stdio.h>

int addition(int *ptr1, int *ptr2){
    int result = *ptr1 + *ptr2;
    return result;
}

int main(void){
    typedef int *t_customPtr1;
    typedef int *t_customPtr2;

    int number1 = 24;
    int number2 = 27;

    t_customPtr1 ptr1 = &number1;
    t_customPtr2 ptr2 = &number2;

    int add = addition(ptr1, ptr2);

    printf("%d + %d = %d", *ptr1, *ptr2, add);

    return 0;
}

/* Prints 24 + 27 = 51 */
