/* Write the functions atoi, itoa, atof and reverse that we wrote before using a pointer instead of indexing an array */

#include <stdio.h>
#include <string.h>

char reverse(char *string);
void itoa(int n, char str[]);
float atof(char stringNumber[]);
int atoi(char s[]);

int main(void){
    char str[] = "Reverse me";
 
    reverse(str);
    printf("%s\n", str);

    char array[25];
    int number = 168;
    itoa(number, array);
    printf("String of characters: %s\n", array);


    char strNum[] = "123.456";
    printf("Atof: %.3f\n", atof(strNum));

    char sNum[] = "135";
    printf("Atoi: %d", atoi(sNum));

    return 0;
}

char reverse(char *string){
    char *ending = string + (strlen(string) - 1);
 
    while (ending > string){
        char character = *string;
        *string = *ending;
        *ending = character;
 
        ++string; 
        --ending;
    }
    return *string;
}

void itoa(int n, char *str){
    int sign = n;
    if (sign < 0){
        n = -n;
    }
    do{
        *str++ = n % 10 + '0';
    } while ((n /= 10) > 0);
    
    if (sign < 0){
        *str++ = '-';
    }
    *str = '\0';

    reverse(str);

}

float atof(char stringNumber[]){
    float number = 0;
    int power = 1;
    float result;
    int isNegative = 0;

    if (*stringNumber == '-'){
        isNegative = 1;
        for(; *stringNumber != '\0'; stringNumber++){
            *stringNumber = *stringNumber++;
        }
    }

    for(;(*stringNumber >= '0' && *stringNumber <= '9') || *stringNumber == '.'; stringNumber++){
        if (*stringNumber != '.'){
            number = 10 * number + (*stringNumber - '0');
        }
        if (*stringNumber == '.'){
            stringNumber++;
            for(; *stringNumber >= '0' && *stringNumber <= '9'; stringNumber++){
                number = 10 * number + (*stringNumber - '0');
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

int atoi(char s[]){
    int n;
    n = 0;
    for(; *s >= '0' && *s <= '9'; s++)
        n = 10 * n + (*s - '0');
    return n;
}
