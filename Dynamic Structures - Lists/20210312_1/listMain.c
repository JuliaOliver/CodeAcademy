/* Implementation of a list. Write a program that adds and deletes an 
item from a list by item in the list. Use the following dynamic list item:

typedef struct t_node {
    int m_nValue;
    t_node * m_pNext;
} t_node; */

#include "protorypes.h"
#include <stdio.h>

node_t *start;

int main(void){
    int i, x;

    init();
    
    for(i = 1; i < 16; i++){
        add(i);
    }
    printList();
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    addAfter(20, 10);
    printList();
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    addPrev(25, 15);
    printList();
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    addEnd(30);
    printList();
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    dellFirst(&x);
    printf("x = %d\n", x);
    printList();
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    node_t *curr = dellElemReturnAfter(&x, 10);
    printf("x = %d\n", x);
    printAfter(curr);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    dellEnd(&x);
    printf("x = %d\n", x);
    printList();
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    search_iter(5);
    printf("Searched = %d\n\n", x);

    return 0;
}

/* Prints 
15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
15, 14, 13, 12, 11, 10, 20, 9, 8, 7, 6, 5, 4, 3, 2, 1,
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
25, 15, 14, 13, 12, 11, 10, 20, 9, 8, 7, 6, 5, 4, 3, 2, 1,
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
25, 15, 14, 13, 12, 11, 10, 20, 9, 8, 7, 6, 5, 4, 3, 2, 1, 30,
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
x = 25
15, 14, 13, 12, 11, 10, 20, 9, 8, 7, 6, 5, 4, 3, 2, 1, 30,
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
x = 10
20, 9, 8, 7, 6, 5, 4, 3, 2, 1, 30,
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
x = 30
15, 14, 13, 12, 11, 20, 9, 8, 7, 6, 5, 4, 3, 2, 1,
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Searched = 30 */