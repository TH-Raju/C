#include <stdio.h>

struct employee {
    char name[100];
    int id;
    float salary;
    char designation[100];
};

int main() {
    struct employee emp1, emp2;
    

    printf("Enter details for employee 1:\n");
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    printf("Designation: ");
    scanf("%s", emp1.designation);
    

    printf("\nEnter details for employee 2:\n");
    printf("Name: ");
    scanf("%s", emp2.name);
    printf("ID: ");
    scanf("%d", &emp2.id);
    printf("Salary: ");
    scanf("%f", &emp2.salary);
    printf("Designation: ");
    scanf("%s", emp2.designation);

    struct employee highest_salary_emp;
    if (emp1.salary > emp2.salary) {
        highest_salary_emp = emp1;
    } else {
        highest_salary_emp = emp2;
    }
    

    printf("\nDetails of employee with the highest salary:\n");
    printf("Name: %s\n", highest_salary_emp.name);
    printf("ID: %d\n", highest_salary_emp.id);
    printf("Salary: $%.2f\n", highest_salary_emp.salary);
    printf("Designation: %s\n", highest_salary_emp.designation);
    
    return 0;
}
