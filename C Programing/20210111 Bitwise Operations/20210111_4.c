/* Create a function that receives the parameter number and index and sets to one, the bit of the corresponding index in the number. */

#include <stdio.h> 

int setBit(int a, int index);

int main(){ 
    int a = 5, index = 1; 
  
    printf("%d", setBit(a, index));

    return 0;
} 

int setBit(int a, int index){
    int mask = (1u << index);
    int newNum = a | mask;
    return newNum;
}
/* prints 7 */
