/* Write a program in C that uses a function to convert decimal numbers to binary. */

#include <stdio.h>

int decimalToBinary(int number);

int main(){
    char choice;
    int number;
    while(1){
        printf("Enter a decimal to convert in binary\nDecimal: ");
        scanf("%i", &number);

        decimalToBinary(number);

        printf("\n\nIf you want to continue with another number press 'y'\nIf you want to exit press 'n'\n");
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

int decimalToBinary(int number){
    int binary[12];
    int i = 0; 
    while (number > 0){ 
        binary[i] = number % 2; 
        number = number / 2; 
        i += 1; 
    }
    printf("Binary: ");
    for(i = i - 1; i >= 0; i -= 1){    
        printf("%d", binary[i]);    
    } 
}

/* Prints the converted decimal to binary */
