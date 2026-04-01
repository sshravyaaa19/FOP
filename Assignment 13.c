#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");
    while (num > 0) {
        int digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }
    printf("\n");

    return 0;
}
