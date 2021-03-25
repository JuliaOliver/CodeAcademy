/* Write the int atof (char * s) function, which converts a string to a decimal point number. 
This function is similar to the atoi (char * s) discussed earlier, except that when it comes to the point 
separating the entire fractional part, another loop must be run to calculate the fractional number 
in the same way as is the number in the whole part. But here at the fractional part we must have one variable, 
which we must multiply by 10 each time to the end of the fractional part power * = 10; 
Finally, we need to divide the resulting number by this variable to get the real floating point number in the right place */

#include <stdio.h>

float atoi(char stringNumber[]);

int main(void){
    char choice, stringNumber[20];
    while (1){
        printf("Enter a string positive number with a fractional part, to convert it to float:\nNumber: ");
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
    return result;    
}

/* Depending the entered input, prints the corresponding answer */
