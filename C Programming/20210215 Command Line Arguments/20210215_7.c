/* Create a program in which you initialize a pointer to a variable and then 
calculate the sum of the variable (using the pointer) + 5. Print on the screen. */

#include <stdio.h>

int main(void){
    int a = 10;
    int *pointer = &a;
    int sum = *pointer + 5;

    printf("%i\n", sum);
    
    return 0;
}

/* Prints 15 */
