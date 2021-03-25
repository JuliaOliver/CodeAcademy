/* Perform two functions and call the desired function with a pointer 
to a function according to the character given by the command line: a.exe 20 + 3 */

#include <stdio.h>
#include <stdlib.h>

int addition(int nA, int nB){ 
    return(nA + nB);
}

int subtraction(int nA, int nB){
    return(nA - nB);
}

int main(int argc, char* argv[]){
    int(*calcualtion) ( int, int ) = NULL;

    if(argc < 4){
        printf("\nUsage: %s +/- arg1 arg2\n", argv[0]);
    }

    else if('-' == argv[2][0]){
        calcualtion = subtraction; 
    }

    else if('+' == argv[2][0]){
        calcualtion = addition; 
    }

    (NULL == calcualtion) ? 0 : printf("\nResult: %d\n", (*calcualtion)(atoi(argv[1]), atoi(argv[3])));
    return 0;
}

/* Depending the entered input, prints the corresponding answer */
