/* Relational operators */

#include <stdio.h>
    int main(void){
    int nX;
    int nY;

    printf("Enter the first number: ");
    scanf("%d", &nX);
    printf("Enter the second number: ");
    scanf("%d", &nY);


    if (nX == nY){
        printf("%d and %d are equal\n", nX, nY);
    }
    
    if (nX != nY){ 
        printf("%d and %d are not equal\n", nX, nY);
    }

    if (nX > nY){ 
        printf("%d is greater than %d\n", nX, nY);
    }

    if (nX < nY){ 
        printf("%d is less than %d\n", nX, nY);
    }

    if (nX >= nY){ 
        printf("%d is greater than or equal to %d\n", nX, nY);
    }
    
    if (nX <= nY){ 
        printf("%d is less than or equal to %d\n", nX, nY);
    }

    return 0;
}

/* Depending on the entered numbers, prints the corresponding result */
