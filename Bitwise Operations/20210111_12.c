/* Raise all bits of a number to positions divisible by 3. Only use bitwise operators!*/

#include <stdio.h> 

int setBit(int a, int index);

int main(){ 
    int a = 10, index = 3; 
  
    printf("%d", setBit(a, index));

    return 0;
} 

int setBit(int a, int index){
    int mask = (1u << index);
    int newNum = a | mask;
    index += 3;
    int secNum = newNum | (1u << index);

    return secNum;
}
/* prints 74 */
/* ONLY WORKS FOR 8-BIT NUMBERS */
