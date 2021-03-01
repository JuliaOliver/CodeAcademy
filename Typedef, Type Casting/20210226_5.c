/* Define a custom type to an array. Initialize the array, display on the console. */

#include <stdio.h>

typedef int t_customArrayOfFive[5];

int main(void){
    int i;
    t_customArrayOfFive myArray = {1, 2, 3, 4, 5};
    
    for(i = 0; i < 5; i++){
        printf("Array[%d] = %d\n", i, myArray[i]);
    }

    return 0;
}

/* Prints Array[0] = 1
          Array[1] = 2
          Array[2] = 3
          Array[3] = 4
          Array[4] = 5 */
