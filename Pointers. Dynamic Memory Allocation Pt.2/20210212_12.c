/* Using the code in file 20210212_11.c, bring out the participants arranged alphabetically. */

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
            for (int k = 0; k <= i; k++){
                for (int j = k + 1; j <= i; j++){
                    if (strcmp(name[k], name[j]) > 0){
                        printf("smth");
                        char temp[100];
                        strcpy(temp, name[k]);
                        strcpy(name[k], name[j]);
                        strcpy(name[j], temp);

                        strcpy(temp, surname[k]);
                        strcpy(surname[k], surname[j]);
                        strcpy(surname[j], temp);
                        
                        int itemp = serialNumber[k];
                        serialNumber[k] = serialNumber[j];
                        serialNumber[j] = itemp;

                        itemp = age[k];
                        age[k] = age[j];
                        age[j] = itemp;
                    }
                }
            }
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

/* Sorting doesn't work, I don't know how to make it correct */
