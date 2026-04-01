#include <stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute smallest divisor (other than 1)
int smallest_divisor(int n) {
    if (n <= 1) return n; // edge case
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n; // prime number case
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Smallest divisor of %d: %d\n", num1, smallest_divisor(num1));
    printf("Smallest divisor of %d: %d\n", num2, smallest_divisor(num2));
    printf("Greatest Common Divisor (GCD): %d\n", gcd(num1, num2));

    return 0;
}
