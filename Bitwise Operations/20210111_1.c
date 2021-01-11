/* Perform bitwise operations on integers 3 and 5 in main() */

#include <stdio.h> 
int main() 
{
    int a, b;
    a = 3;
    b = 5;

    printf("%d\n", a & b); 
  
    printf("%d\n", a | b); 
  
    printf("%d\n", a ^ b);
  
    return 0; 
}
/* prints 1 
          7          
          6 */
