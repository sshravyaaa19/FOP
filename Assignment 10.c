#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0) return -1; // factorial not defined for negative numbers
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice;
    double x, y;
    long long fact;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Addition (x + y)\n");
    printf("2. Subtraction (x - y)\n");
    printf("3. Multiplication (x * y)\n");
    printf("4. Division (x / y)\n");
    printf("5. Power (x ^ y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2lf\n", x + y);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2lf\n", x - y);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2lf\n", x * y);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            if(y != 0)
                printf("Result: %.2lf\n", x / y);
            else
                printf("Error: Division by zero!\n");
            break;
        case 5:
            printf("Enter base (x) and exponent (y): ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2lf\n", pow(x, y));
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &x);
            fact = factorial((int)x);
            if(fact == -1)
                printf("Error: Factorial not defined for negative numbers!\n");
            else
                printf("Result: %lld\n", fact);
                break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

