/* Write a global variable that we increment by 1 in the void test () function. 
Call the function three times test () from main () print the value of the global variable. */

#include <stdio.h>

void test();

extern int globalVariable;

int main(void){
    test();
    test();
    test();
}

void test(){
    globalVariable += 1;
    printf("Global Variable = %d\n", globalVariable);
}

int globalVariable = 0;

/* Prints Global Variable = 1
          Global Variable = 2
          Global Variable = 3 */
