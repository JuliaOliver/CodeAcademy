/* Add to the code from file 20210217_1.c, 
multiplication function and division function. */

#include <stdio.h>
#include <stdlib.h>

int addition(int nA, int nB){ 
    return(nA + nB);
}

int subtraction(int nA, int nB){
    return(nA - nB);
}

int multiplication(int nA, int nB){
    return(nA * nB);
}

int division(int nA, int nB){
    return(nA / nB);
}

int main(int argc, char* argv[]){
    int(*pfCalc) ( int, int ) = NULL;

    if(argc < 4){
        printf("\nUsage: %s arg1 +/-/x/% arg2\n", argv[0]);
    }

    else if('-' == argv[2][0]){
        pfCalc = subtraction; 
    }

    else if('+' == argv[2][0]){
        pfCalc = addition; 
    }

    else if('x' == argv[2][0]){
        pfCalc = multiplication; 
    }

    else if('/' == argv[2][0]){
        if(argv[3][0] == '0'){
            printf("Error. Division by zero.");
        }
        pfCalc = division; 
    }

    (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));
    return 0;
}

/* Depending the entered input, prints the corresponding answer */
