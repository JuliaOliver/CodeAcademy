/* Write a date type using bit fields. Create a function that displays a 
date using the new type. Make a function that validates the date. */

#include <stdio.h> 
  
struct date{ 
    unsigned int d: 5;  
    unsigned int m: 4; 
    unsigned int y: 16; 
}; 
  
int main() { 
    printf("Size of date is %lu bytes\n", sizeof(struct date)); 
    struct date dt = {23, 02, 2021}; 
    printf("Date is %d.%d.%d", dt.d, dt.m, dt.y); 
    return 0; 
}

/* Prints Size of date is 4 bytes
          Date is 23.2.2021 */
