// WAP to store n employees data such as employee name, gender, designation,
// department, basic pay etc using structures with dynamically memory allocation.
// Calculate the gross pay of each employees as follows:
// Gross pay=basic pay + HR + DA
// HR=25% of basic, DA=75% of basic

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LENGTH 30
#define HR(x) 0.25*x
#define DA(x) 0.75*x

typedef struct {
    char name[LENGTH];
    char gender;
    char desig[LENGTH];
    float basic, gross;
} Employee;

void calculate_gross_pay(Employee*);
void get_employee(Employee*);
void show_employee(Employee*);

int main() {
    int n, i=1;
    Employee *first_employee, *last_employee, *employee;

    printf("Enter no. of employees: ");
    scanf("%d", &n);
    getchar();  // eat trailing newline
    
    first_employee = malloc(sizeof(Employee) * n);
    last_employee = first_employee + n;

    // Get data
    for (employee=first_employee; employee!=last_employee; employee++) {
        printf("Employee #%d\n", i++);
        printf("-----------\n");
        get_employee(employee);
        putchar('\n');
    }

    putchar('\n');

    printf("List of all employees, and their gross pays:\n");

    // Display data
    i = 1;
    for (employee=first_employee; employee!=last_employee; employee++) {
        printf("Employee #%d\n", i++);
        printf("----------\n");
        calculate_gross_pay(employee);
        show_employee(employee);
        putchar('\n');
    }

    free(first_employee);
}

void calculate_gross_pay(Employee* emp) {
    emp->gross = emp->basic + HR(emp->basic) + DA(emp->basic);
}

void get_employee(Employee* emp) {
    printf("Enter name: ");
    scanf("%[^\n]", emp->name);
    getchar();  // eat trailing newline

    printf("Specify gender (M/f): ");
    emp->gender = tolower(getchar());
    getchar();  // eat trailing newline

    printf("Enter designation: ");
    scanf("%[^\n]", emp->desig);
    getchar();  // eat trailing newline

    printf("Enter basic pay: ");
    scanf("%f", &emp->basic);
    getchar();  // eat trailing newline
}

void show_employee(Employee* emp) {
    printf("Name : %s\n", emp->name);
    printf("Gender : %s\n", (emp->gender == 'f') ? "Female" : "Male");
    printf("Designation : %s\n", emp->desig);
    printf("Basic pay : %f\n", emp->basic);
    printf("Gross pay : %f\n", emp->gross);
}
