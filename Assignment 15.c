#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    printf("How many random numbers do you want to generate? ");
    scanf("%d", &n);

    // Seed the random number generator
    srand(time(0));

    printf("Pseudo random numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", rand());  // generates random integer
    }

    return 0;
}
