/* Add a check in the int atof (char * s) function from file 20210201_2.c 
that the submitted string has no display positions before the number and, 
if any, remove them. Check that the number is not negative and, if so, include the sign in the result. */

#include <stdio.h>

float atoi(char stringNumber[]);

int main(void){
    char choice, stringNumber[20];
    while (1){
        printf("Enter a string number with a fractional part, to convert it to float:\nNumber: ");
        scanf("%s", &stringNumber);
        printf("Float: %.5f\n", atoi(stringNumber));
        printf("Do you want to convert another number? y/n\n");

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

float atoi(char stringNumber[]){
    int i = 0;
    float number = 0;
    int power = 1;
    float result;
    int isNegative = 0;

    if (stringNumber[i] == '-'){
        isNegative = 1;
        for(i; stringNumber[i] != '\0'; i++){
            stringNumber[i] = stringNumber[i+1];
        }
        i = 0;
    }


    for(i; (stringNumber[i] >= '0' && stringNumber[i] <= '9') || stringNumber[i] == '.' ; i++){
        if (stringNumber[i] != '.'){
            number = 10 * number + (stringNumber[i] - '0');
        }
        if (stringNumber[i] == '.'){
            i += 1;
            for(i; stringNumber[i] >= '0' && stringNumber[i] <= '9'; i++){
                number = 10 * number + (stringNumber[i] - '0');
                power *= 10;
            }
        }
    }

    result = number / power;

    if (isNegative == 1){
        result = -result;
    }
    return result;    
}

/* Depending the entered input, prints the corresponding answer */
