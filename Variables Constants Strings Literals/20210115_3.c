/* Literals */

#include <stdio.h>

int main(void){
    printf("Character literals: '%c', '%c', '%c'\n", '\041', '\x3A', 'Z');

    printf("Integer literals: %d, %d, %lld \n", 123, 0xFFF, 123456789012345ULL);

    printf("Floating-point literals: %lf, %lf, %lg, %lg \n", 1.23, 1234.5678, 123E-12, 123E+28);

    printf("String literals: \"%s\", \"%s\", \"%s\" \n", "xxx", "yyy", "zzz");

    return 0;
}

/* Prints Character literals: '!', ':', 'Z'
          Integer literals: 123, 4095, 123456789012345
          Floating-point literals: 1.230000, 1234.567800, 1.23e-010, 1.23e+030
          String literals: "xxx", "yyy", "zzz" */
