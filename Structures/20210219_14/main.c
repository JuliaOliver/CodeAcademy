#include "funcAndStruct.h"

int main(void){
    int totalEmployees = 2;
    struct employee employeesList[totalEmployees];
    struct boss bossList[totalEmployees];

    employeeFill(employeesList, totalEmployees);
    bossFill(employeesList, bossList, totalEmployees);

    for (int i = 0; i < totalEmployees; i++){
        printf("\n\nEmpployee with ID %d, %s %s %s, on position %s\ngets %dBGN " 
        "has %d years working experience and his/her boss is %s %s %s!\n\n",
               employeesList[i].id, employeesList[i].name, employeesList[i].surname,
               employeesList[i].familyName, employeesList[i].position, employeesList[i].salary, employeesList[i].workingExperience,
               bossList[i].name, bossList[i].surname, bossList[i].familyName);
    }

    return 0;
}
