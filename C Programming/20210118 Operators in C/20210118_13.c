/* Logical operators */

#include <stdio.h>
int main(void){
    int nA;
    int nB;
    int nX;
    int nY;

    printf("Enter the first number: ");
    scanf("%d", &nA);
    printf("Enter the second number: ");
    scanf("%d", &nB);
    printf("Enter the third number: ");
    scanf("%d", &nX);
    printf("Enter the fourth number: ");
    scanf("%d", &nY);

    if (nA > nB && nA != 0){
        printf("&& Operator : Both conditions are true\n");
    }
    if (nX > nY || nY != 20){
        printf("|| Operator : Only one condition is true\n");
    }
    if(!(nA > nB && nB != 0)){
        printf(" ! Operator : Both conditions are true\n");
    } 
    else{
        printf("Both conditions are true.\n");
    }
    if (nA == nB && nB != 0){
        printf("&& Operator : Both conditions are true\n");
    }

    if (nX != nY || nX == 0){
        printf("|| Operator : Only one condition is true\n");
    }

    return 0;
}

/* Depending on the entered numbers, prints the corresponding result */
