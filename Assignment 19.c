#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure definition
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender; // 'M' or 'F'
    char doj[15]; // Date of joining
    float salary;
};

// Function to count total employees
int totalEmployees(int n) {
    return n;
}

// Function to count male and female employees
void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;

    for (int i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f')
            female++;
    }

    printf("\nMale Employees: %d", male);
    printf("\nFemale Employees: %d\n", female);
}

// Function to display employees with salary > 10000
void highSalary(struct EMPLOYEE emp[], int n) {
    printf("\nEmployees with salary > 10000:\n");

    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("%s | %s | %.2f\n",
                   emp[i].name,
                   emp[i].designation,
                   emp[i].salary);
        }
    }
}

// Function to display employees with designation "asst manager"
void asstManager(struct EMPLOYEE emp[], int n) {
    printf("\nEmployees with designation 'asst manager':\n");

    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "asst manager") == 0) {
            printf("%s | %s | %.2f\n",
                   emp[i].name,
                   emp[i].designation,
                   emp[i].salary);
        }
    }
}

// Main function
int main() {
    struct EMPLOYEE emp[MAX];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining: ");
        scanf(" %[^\n]", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Function calls
    printf("\nTotal Employees: %d\n", totalEmployees(n));

    countGender(emp, n);
    highSalary(emp, n);
    asstManager(emp, n);

    return 0;
}
