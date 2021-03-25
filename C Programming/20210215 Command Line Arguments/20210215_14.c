/* Write a program to generate a random 6-letter 
password until the user likes it by USING POINERS*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

char* passwordGenerator(int n, char pass[]);

int main(void){
    int passwordLength = 6;
    char choice;

    while(1){
        char password[6] = "------";
        printf("Your random password is: %s", passwordGenerator(passwordLength, password));

        printf("\nDo you accept the passowrd y/n?\n");
        scanf(" %c", &choice);

        if (choice == 'y'){
            printf("Congrats! Your password is generated!");
            break;
        }
        else if (choice == 'n'){
            continue;
        }
        else{
            while (choice != 'y' && choice != 'n'){
                printf("Invalid command, please try again!\n");
                scanf(" %c", &choice);
                if (choice == 'y'){
                    break;
                }
            }
        }
    }

    return 0;
}

char* passwordGenerator(int n, char pass[]){
    int lettersCount = 26;
    srand((unsigned int)(time(NULL))); 

    char letters[] = "abcdefghijklmnoqprstuvwyzx"; 
    int i = 0;
    char *pointer = pass;

    while (i < n){
        *pointer = letters[rand() % lettersCount];
        pointer++;
        i++;
    }
    
    *pointer++ = '\0';
    
    return pass;
    
}

/* Depending the entered input, prints the corresponding answer */ 
