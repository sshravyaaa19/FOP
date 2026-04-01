#include <stdio.h>

// Recursive function to compute factorial
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } else {
        return n * factorial_recursive(n - 1);  // Recursive step
    }
}

// Iterative function to compute factorial
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d (recursive): %d\n", num, factorial_recursive(num));
    printf("Factorial of %d (iterative): %d\n", num, factorial_iterative(num));

    return 0;
}
