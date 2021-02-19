#include "funcAndStruct.h"

void employeeFill(struct employee *employeesList, int totalEmployees){
    for (int i = 0; i < totalEmployees; i++){
        employeesList[i].id = i+1;
        printf("Please enter employee name: ");
        scanf(" %s", &employeesList[i].name);
        printf("Please enter employee surname: ");
        scanf(" %s", &employeesList[i].surname);
        printf("Please enter employee family name: ");
        scanf(" %s", &employeesList[i].familyName);
        printf("Please enter employee position: ");
        scanf(" %[^\n]", &employeesList[i].position);
        printf("Please enter employee  salary: ");
        scanf(" %d", &employeesList[i].salary);
        printf("Please enter employee working experience in years: ");
        scanf(" %d", &employeesList[i].workingExperience);
        printf("\n");
    }
}

void bossFill(struct employee *employeesList, struct boss *bossList, int totalEmployees){
    for (int i = 0; i < totalEmployees; i++){
        printf("\nPlease enter the boss of employee %s %s with ID %d\n",
        employeesList[i].name, employeesList[i].familyName, employeesList[i].id);
        printf("Please enter boss name: ");
        scanf(" %s", &bossList[i].name);
        printf("Please enter boss surname: ");
        scanf(" %s", &bossList[i].surname);
        printf("Please enter boss family name: ");
        scanf(" %s", &bossList[i].familyName);
    }
}
