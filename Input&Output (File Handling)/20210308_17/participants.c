#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
typedef struct{
    int serialNumber;
    int age;
    char fname[15];
    char lname[15];
    char *name[MAX];
    char *surname[MAX];
}person;
void fillArr(person *ptr, int choice);
void printArr(person* ptr, int choice);
int main(void){
    int choice=0;
    printf("How many participants would you want to enter?\n");
    scanf("%d", &choice);
    person *ptr;
    ptr = (person*)malloc(choice * sizeof(person));
    fillArr(ptr, choice);
    printArr(ptr, choice);
    free(ptr);
    return 0;
}
void fillArr(person *ptr, int choice){
    int i = 0;
    for(i=0; i < choice; i++){
        printf("Participant[%d]\n", i + 1);
        printf("Enter serial Number: \n");
        scanf("%d", &(ptr + i)->serialNumber);
        printf("Enter first name. \n");
        scanf("%s", &(ptr+i)->fname);
        ptr[i].name[i] = (char*)malloc(64);
        strcpy(ptr[i].name[i], (ptr+i)->fname);
        printf("Enter second name. \n");
        scanf("%s", &(ptr + i)->lname);
        ptr[i].surname[i] = (char*)malloc(64);
        strcpy(ptr[i].surname[i], (ptr+i)->lname);
        printf("Enter age of participant. \n");
        scanf("%d", &(ptr + i)->age);
    }
}
void printArr(person* ptr, int choice){
    int i = 0;
    for(i=0; i < choice; i++){
        printf("Participant[%d] with serial number %d, name: %s %s , age %d .\n", i+1, (ptr+i)->serialNumber, ptr[i].name[i], ptr[i].surname[i], (ptr+i)->age);
    }
}
