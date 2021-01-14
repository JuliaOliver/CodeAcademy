/* Create a program that allocates memory for data of type: 
char, int, long, float, double, initialize during compilation 
the corresponding variables respectively: a = 'a', b = 102, 
c = 50000, d = 6, e = -48,907. The program displays the contents 
of the memory allocated for data, formatted according 
to the type of individual data elements. */

#include <stdio.h>

int main(void){
    
    char a = 'a';
    printf("%c\n", a); 

    int b = 102;
    printf("%d\n", b);
    
    long int c = 50000;
    printf("%ld\n", c);

    float d = 6;
    printf("%.2f\n", d);

    double e = -48.907;
    printf("%f\n", e);
    
    return 0;
}

/* Prints a
          102
          50000
          6.00
          -48.907000 */
