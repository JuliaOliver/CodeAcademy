#include <stdio.h>
#include <math.h>

int leastCommonMultipleFunction(int a, int b);
float absoluteValue(float a);
float squareRootOfNum(float a);

int leastCommonMultipleFunction(int a, int b){
    int leastCommonMultiple;
    int i = 1;
    while(1){
        if ((i % a == 0) && (i % b == 0)){
        leastCommonMultiple = i;
        return leastCommonMultiple;
        }

        i += 1;
    }
}

float absoluteValue(float a){
    a = fabs(a);
    return a;
}

float squareRootOfNum(float a){
    if (a < 0){
        a = absoluteValue(a);
        printf("Negative numbers don't have real square roots.\n");
        printf("The absolute value of a = %.2f, and the operation will be done with this value!\n", a);
    }
    return sqrt(a);
    
}
