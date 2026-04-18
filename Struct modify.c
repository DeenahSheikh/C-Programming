#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearsOfService;
};
void fillEmployeeData(struct Employee *empPtr){
    scanf("%d", &empPtr->id);
    scanf("%s", empPtr->name);
    scanf("%s", empPtr->department);
    scanf("%f", &empPtr->salary);
    scanf("%d", &empPtr->yearsOfService);

    float bonus;
    if(empPtr->yearsOfService>=5){
        bonus= 0.1 * empPtr->salary;
    }else{
        bonus= empPtr->salary *0.05;
    }
    empPtr->salary+=bonus;
}
void displayEmployee(struct Employee *empPtr){
    printf("Employee Details:\n");
    printf("ID: %d\n", empPtr->id);
    printf("Name: %s\n",empPtr->name);
    printf("Department: %s\n",empPtr->department);
    printf("Salary: %.2f\n", empPtr->salary);
    printf("Years of Service: %d\n",empPtr->yearsOfService);
}
void promoteEmployee(struct Employee *empPtr){
    empPtr->salary*= 1.15;
    empPtr->yearsOfService++;
    printf("Employee promoted successfully!\n");
}
int main() {
    struct Employee *empPtr;
    empPtr=malloc(sizeof(struct Employee));
    if(empPtr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    else{
        printf("Memory allocated successfully\n");
    }
    fillEmployeeData(empPtr);
    printf("Initial employee data:\n");
    displayEmployee(empPtr);
    promoteEmployee(empPtr);
    printf("After promotion:\n");
    displayEmployee(empPtr);
    free(empPtr);
    printf("Memory freed successfully\n");
    return 0;
}