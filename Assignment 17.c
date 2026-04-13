#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double x, sum = 0.0;

    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate sine series
    for (int i = 0; i < n; i++) {
        int power = 2 * i + 1;  // odd powers: 1, 3, 5, ...
        double term = pow(-1, i) * pow(x, power) / factorial(power);
        sum += term;
    }

    printf("Sum of sine series up to %d terms = %lf\n", n, sum);
    printf("Using math.h sin(x) = %lf\n", sin(x));

    return 0;
}
