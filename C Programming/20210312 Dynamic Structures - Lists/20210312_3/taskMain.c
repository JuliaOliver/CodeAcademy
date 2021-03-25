#include "protorypes.h"
#include <stdio.h>

node_t *start;
#define n 5

int main(void){
    int i, x;

    init();

    for(i = 1; i <= 14; i++){
        add(i);
    }
    printList();

    printElement(n);

    return 0;
}

/* Prints 
14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 
The 5th element is 10 */
