/* Make a function that will print the numbers from decimal to binary. */

#include <stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(void){
    int a = 10;
    bin(a);

    return 0;
}
/* Prints 00001010 */

