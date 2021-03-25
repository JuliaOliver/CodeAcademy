/* Write a function void itob (int n, char s [], int b), which converts an integer n 
to a string s based on b. For example, itob (n, s[], 16)  represents the number n 
as a hexadecimal number in the string s []. */

#include <stdio.h>
#include <string.h>

void itob(int n, char string [], int b);

char reverse(char *string);

int main(void){
    int number;
    char string[32];
    int base = 16;
    printf("Enter an integer to convert to hexadecimal:\nNumber: ");
    scanf("%d", &number);
    itob(number, string, base);
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

void itob(int n, char string [], int b){
    int i = 0;
    int sign = n;
    int j;

    do{
        j = n % b;
        if (sign < 0){
            j = -j;
        }
        string[i++] = (j > 9 ? (j - 10 + 'A'):(j + '0'));
    } while ((n /= b) > 0);

    if (sign < 0){
        string[i++] = '-';
    }
    string[i] = '\0';
    reverse(string);

    printf("Number as hecadecimal: %s\n", string);
}

/* Prints the hexadecimal representation ot the entered number as string of characters */
