/* Introduce the employees in a company in a structure with members: 
serial number, name, surname, family name, position, working experience in years, 
salary in BGN, pointer to the structure, describing its boss. Write a program that 
introduces 10 employees, which are stored in an array of the described structures. 
The entry of employees can be done in two passes, the first entry of all data without 
the pointer to the boss and the second pass, indicating to each employee who is his boss. */

#include <stdio.h>

struct boss{
    char name[BUFSIZ];
    char surname[BUFSIZ];
    char familyName[BUFSIZ];
};

struct employee{
    int id;
    char name[BUFSIZ];
    char surname[BUFSIZ];
    char familyName[BUFSIZ];
    char position[BUFSIZ];
    int workingExperience;
    int salary;
    struct boss *pointer;
};

void employeeFill(struct employee *employeesList, int totalEmployees);
void bossFill(struct employee *employeesList, struct boss *bossList, int totalEmployees);

int main(void){
    int totalEmployees = 10;
    struct employee employeesList[totalEmployees];
    struct boss bossList[totalEmployees];

    employeeFill(employeesList, totalEmployees);
    bossFill(employeesList, bossList, totalEmployees);

    for (int i = 0; i < totalEmployees; i++){
        printf("\n\nEmpployee with ID %d, %s %s %s, on position %s\ngets %dBGN " 
        "has %d years working experience and his/her boss is %s %s %s!\n",
               employeesList[i].id, employeesList[i].name, employeesList[i].surname,
               employeesList[i].familyName, employeesList[i].position, employeesList[i].salary, employeesList[i].workingExperience,
               bossList[i].name, bossList[i].surname, bossList[i].familyName);
    }

    return 0;
}

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

/* Depending the entered input, prints the corresponding answer */
