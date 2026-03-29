#include <stdio.h>

int main() {
    float basicPay, hra, ta, grossSalary, professionalTax, netSalary;

    // Input basic pay
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);

    // Calculate allowances
    hra = 0.10 * basicPay;   // HRA = 10% of basic pay
    ta  = 0.05 * basicPay;   // TA = 5% of basic pay

    // Gross salary
    grossSalary = basicPay + hra + ta;

    // Professional tax = 2% of gross salary
    professionalTax = 0.02 * grossSalary;

    // Net salary = Gross salary - Professional tax
    netSalary = grossSalary - professionalTax;

    // Display results
    printf("\n--- Salary Details ---\n");
    printf("Basic Pay        : %.2f\n", basicPay);
    printf("HRA (10%%)        : %.2f\n", hra);
    printf("TA (5%%)          : %.2f\n", ta);
    printf("Gross Salary     : %.2f\n", grossSalary);
    printf("Professional Tax : %.2f\n", professionalTax);
    printf("Net Salary       : %.2f\n", netSalary);

    return 0;
}
