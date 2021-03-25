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
