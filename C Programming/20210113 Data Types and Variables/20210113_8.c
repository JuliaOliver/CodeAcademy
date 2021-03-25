/* What happens to the value of the variable x. What will be the 
value of x if we print it on the screen after the last calculation? */

#include <stdio.h>

int main(void){
    char x = 8;
    x = x - 2;
    x = x + 6;
    x = x - 10 + 2;

    printf("%c\n", x);
    printf("%d", x);

    return 0;
}
/* prints ♦ 
          4 */
