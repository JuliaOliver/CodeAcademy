/* Sum the two numbers of type char 255 + 10, and use the 
function for representing the numbers in binary form. */

#include <stdio.h>

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(void){
    char a = 255;
    bin(a);
    char b = 10;
    bin(b);
    char res = a + b;
    printf("%d\n", res);
    bin(res);

    return 0;
}
/* Prints 11111111
          00001010
          9
          00001001 */
