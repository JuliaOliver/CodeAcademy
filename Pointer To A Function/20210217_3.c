/* Make an array of pointers to functions by
as follows:
void add () {...}
void fun2 () {...}
void fun3 () {...}
void (* func_ptr [3]) () = {fun1, fun2, fun3};
Make a menu to ask the user which of the above functions wants to use - 
addition, subtraction, multiplication and division. Then ask for the numbers that 
to participate in this operation, and call the function to perform the desired operation. */

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

int(*functionPointer[4])() = {addition, subtraction, multiplication, division};

int main(void){
    int a;
    int b;

    printf("What operation would you want to do?\n");
    printf("For addition press 0\n");
    printf("For subtraction press 1\n");
    printf("For multiplication press 2\n");
    printf("For division press 3\n");

    int choice;
    scanf(" %d", &choice);

    printf("Enter two numbers for the operation\n");
    printf("a = ");
    scanf(" %d", &a);
    printf("b = ");
    scanf(" %d", &b);

    printf("Result = %d", functionPointer[choice](a, b));
}

/* Depending the entered input, prints the corresponding answer */
