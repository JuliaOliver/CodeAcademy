/* Write a program in C that uses a function to check whether a number is even or not. */

#include <stdio.h>

void evenOdd(int number);

int main(void){
    char choice;
    int number;
    while(1){
        printf("Enter a number (integer) to be checket if is even or odd\nNumber: ");
        scanf("%i", &number);

        evenOdd(number);

        printf("If you want to continue with another number press 'y'\nIf you want to exit press 'n'\n");
        scanf("%s", &choice);

        if (choice == 'y'){
            continue;
        }
        else{
            break;
        } 
    }
    return 0;
}

void evenOdd(int number){
    if (number % 2 == 0){
        printf("Your number is an even number!\n\n");
    }
    else if (number % 2 == 1){
        printf("Your number is an odd number!\n\n");
    }
}

/* Depending the enered number, prints a message if it is even or odd */
