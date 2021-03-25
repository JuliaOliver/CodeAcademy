/* Write a program to generate a password in lowercase (i),
special characters (j), capital letters (k) and numbers (l), but shuffled. Use functions.
Guidelines:
1. Enter the length of the password, how many characters from it are lowercase letters (a..z), 
uppercase letters (A..Z), how many numbers (0..9), how many special characters (@ # $%! ^ & *).
2. A random number generator is used for the symbols and their position */

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void passGenerator(int n, int letLow, int letUp, int num, int sym);

int main(void){
    int passLength;
    int numbersCount;
    int lowercaseCount;
    int uppercaseCount;
    int symbolsCount;
    

    printf("How long password whoud you like to generate?\nPassword length: ");
    scanf(" %d", &passLength);
    printf("How many lowercase letters do you want it to have?\nLowercase letetrs count: ");
    scanf(" %d", &lowercaseCount);
    printf("How many uppercase letters do you want it to have?\nUppercase letetrs count: ");
    scanf(" %d", &uppercaseCount);
    printf("How many numbers do you want it to have?\nNumbers count: ");
    scanf(" %d", &numbersCount);
    printf("How many symbols do you want it to have?\nSymbols count: ");
    scanf(" %d", &symbolsCount);

    passGenerator(passLength, lowercaseCount, uppercaseCount, numbersCount, symbolsCount);

    return 0;
}

void passGenerator(int n, int letLow, int letUp, int num, int sym){
    char pass[n];
    int lettersLowCount = 26;
    int lettersUpCount = 26;
    int numbersCount = 10;
    int symbolsCount = 8;
    int types = 4;
    int randomizer = 0;
    int lowTotal = 0; 
    int upTotal = 0;
    int numTotal = 0;
    int symTotal = 0;
    srand((unsigned int)(time(NULL))); 

    char lettersLower[] = "abcdefghijklmnoqprstuvwyzx"; 
    char lettersUpper[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char numbers[] = "0123456789";
    char symbols[] = "!@#$^&*?"; 
    int i = 0;
    char *pointer = pass;

    for (i = 0; i < n; i++){
        randomizer = rand() % 4;    
        if (randomizer == 1){
            if(numTotal >= num){
                i--;
                continue;
            }
            pass[i] = numbers[rand() % 10]; 
            numTotal ++;
        } 

        else if (randomizer == 2){
            if(symTotal >= sym){
                i--;
                continue;
            } 
            pass[i] = symbols[rand() % 8]; 
            symTotal++;
        } 

        else if (randomizer == 3){
            if(upTotal >= letUp){
                i--;
                continue;
            } 
            pass[i] = lettersUpper[rand() % 26]; 
            upTotal++;
        }

        else{
            if(lowTotal >= letLow){
                i--;
                continue;
            } 
            pass[i] = lettersLower[rand() % 26]; 
            lowTotal++;
        } 
    } 
    
    pass[i++] = '\0';
    
    printf("Your random password is: %s", pass);
}

/* The program generates a random password with the desired length, numbers count, symbols count, 
lowecase letters count and uppercase letters, all on random positions */
