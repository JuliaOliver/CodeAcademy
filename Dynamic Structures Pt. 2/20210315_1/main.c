/* Use dynamic stack implementation to enter a sequence of positive integers 
and display it in reverse order. Enter 0 at the end of the keyboard sequence */

#include "prototypes.h"

node_t *start;

int main(void){
    int n = 1;

    while (n){
        printf("Enter a digit:\n");
        scanf(" %d", &n);
        push(n);
    }

    printf("\n");
    while (pop(&n)){
        printf("%d  ", n);
    }
    
    return 0;
}
