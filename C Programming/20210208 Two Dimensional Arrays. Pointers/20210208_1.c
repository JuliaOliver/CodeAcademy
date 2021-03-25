/* Define and initialize a one-dimensional array with 5 elements. 
Once you're done, enter the data into the array, reading from the user with scanf. */

#include <stdio.h>

int main(){
    int array[5] = {};
    int number;

    for (int i = 0; i < 5; i++){
        printf("Enter number: ");
        scanf(" %d", &number);
        array[i] = number;
    }

    for (int i = 0; i < 5; i++){
        printf("array [%d] : %d\n", i, array[i]);
    }
    
    return 0;
}

/* When entering the numbers from 1 to 5, prints:
            array [0] : 1
            array [1] : 2
            array [2] : 3
            array [3] : 4
            array [4] : 5 */
