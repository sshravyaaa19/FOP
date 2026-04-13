#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print prime factors
void primeFactors(int num) {
    printf("Prime factors of %d: ", num);
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    if (num > 2) {
        printf("%d", num);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // (i) Square
    printf("Square of %d = %d\n", num, num * num);

    // (ii) Square root
    printf("Square root of %d = %.2f\n", num, sqrt(num));

    // (iii) Cube
    printf("Cube of %d = %d\n", num, num * num * num);

    // (iv) Prime check
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    // (v) Factorial
    printf("Factorial of %d = %lld\n", num, factorial(num));

    // (vi) Prime factors
    primeFactors(num);

    return 0;
}
