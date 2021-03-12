#include "protorypes.h"

void init(){
    start = NULL;
};

int add(int data){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));
    if (!start) return -1;

    start->data = data;
    start->next = p;
    return 0;
}

void printList(){
    node_t *ptr = start;
    while (ptr != NULL){
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void printElement(int n){
    int counter = 0;
    node_t *p = start;
    while(start){
        counter++;
        p = p->next;
        if(counter == n - 1){ /* Using n-1 so we get the 5th element starting the count from one, not zero */
            /* In this case the end is the leftmost element */
            printf("The %dth element is %d", n, p->data);
            break;
        }
        /* The if statement should be (counter == 14-n) if the end is the rightmost element */
    }  
}
