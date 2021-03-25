/* Use a static local variable to achieve the same behavior described in file 20210115_14.c. */

#include <stdio.h>

void test();

int main(void){
    test();
    test();
    test();
}

void test(){
    static int staticVariable = 0;
    staticVariable += 1;
    printf("Static Variable = %d\n", staticVariable);
}

int globalVariable = 0;

/* Prints Static Variable = 1
          Static Variable = 2
          Static Variable = 3 */
