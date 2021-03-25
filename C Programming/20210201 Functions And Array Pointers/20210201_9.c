/* Use a do-while loop to write the void itoa (int n, char s []) function, 
which converts a number to a character string (the opposite of the atoi function). 
The do-while loop is necessary because at least one character will have to be placed 
in the array s [], even if n is zero. If n = 123, to take the last digit, 
we must divide n modulo (%) based on the number system 10. To get a character number, 
you must add the result with '0', ie. 48. To take the next number, you need to divide n by 10. 
This continues until n is different from zero. This generates the string in reverse order - 321, 
so we use the function reverse (char s []); from problem 18 to reverse the string. */

#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
char reverse(char *string);

int main(void){
    char array[25];
    int number;
    printf("Enter a number to convert to string of characters:\nNumber: ");
    scanf("%d", &number);
    itoa(number, array);
    printf("String of characters: %s\n", array);
    return 0;
}

char reverse(char *string){
    int character;
    int i;
    int j;

    for(i = 0, j = strlen(string) - 1; i < j; i++, j--){
        character = string[i];
        string[i] = string[j];
        string[j] = character;
    }
    return *string;
}

void itoa(int n, char string[]){
    int i = 0;
    int sign = n;
    if (sign < 0){
        n = -n;
    }
    do
    {
        string[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    
    if (sign < 0){
        string[i++] = '-';
    }
    string[i] = '\0';
    reverse(string);

}

/* Prints the entered number as string of characters */
