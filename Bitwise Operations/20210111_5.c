/* Create a function that receives the parameter number and index and sets to zero, 
the bit of the corresponding index in the number if it is one, and to one if it is zero. */


#include <stdio.h> 

int setBit(int a, int index);

int main(){ 
    int a = 10, index = 1; 
  
    printf("%d", setBit(a, index));

    return 0;
} 

int setBit(int a, int index){
    int mask = (1u << index);
    int newNum = a ^ mask;
    return newNum;
}

/* prints 8 */
