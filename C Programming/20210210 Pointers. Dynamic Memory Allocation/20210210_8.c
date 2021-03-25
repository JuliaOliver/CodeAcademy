/* Write a program to generate a random 6-letter 
password until the user likes it by USING POINERS*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void passwordGenerator(int n);

int main(void){
    int passwordLength = 6;
    char choice;

    while(1){
        printf("Your random password is: ");
        passwordGenerator(passwordLength);

        printf("\nDo you accept the passowrd y/n?\n");
        scanf(" %c", &choice);

        if (choice == 'y'){
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

void passwordGenerator(int n){
    char password[6] = "------"; 
    srand((unsigned int)(time(NULL))); 

    char letters[] = "abcdefghijklmnoqprstuvwyzx"; 
    int i = 0;
    char *pointer = password;

    for (*pointer; *pointer; *pointer++){
        *pointer = letters[rand() % 26];
    }

    *pointer++ = '\0';
    
    printf("%s", password);
}

/* Depending the entered input, prints the corresponding answer */ 
