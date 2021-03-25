/* Write a program in which the serial number, name, surname, age of participants 
in a marathon are entered. The requirement is for the name and surname not to use 
arrays of fixed length. When the entry is complete, display a list of participants. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int **serialNumber = NULL;
    int **age = NULL;
    char **name = NULL; 
    char **surname = NULL;

    serialNumber = (int **)malloc(sizeof(int *));
    age = (int **)malloc(sizeof(int *));
    name = (char **)malloc(sizeof(char *));
    surname = (char **)malloc(sizeof(char *));

    int i = 0;
    char choice;

    while(1){
        printf("Enter serial number: ");
        scanf(" %d", &serialNumber[i]);

        printf("Enter name: ");
        scanf(" %s", &name[i]);

        printf("Enter surname: ");
        scanf(" %s", &surname[i]);

        printf("Enter age: ");
        scanf(" %d", &age[i]);

        printf("Do you want to add another participant y/n?");
        scanf(" %c", &choice);

        if (choice == 'y'){
            serialNumber = realloc(serialNumber, sizeof(int) * 2);
            age = realloc(age, sizeof(int) * 2);
            name = realloc(name, sizeof(char) * 2);
            surname = realloc(surname, sizeof(char) * 2);
            i++;
            continue;
        }
        else if (choice == 'n'){
            printf("Participants: \n");
            for (int j = 0; j <= i; j++){
                printf("Serial number: %d\n", serialNumber[j]);
                printf("Name: %s\n", name[j]);
                printf("Surname: %s\n", surname[j]);
                printf("Age: %d\n", age[j]);
            }
            break;
        }
    }

    return 0;
} 

/* The printing doesn't word and sadly I have no idea why */
