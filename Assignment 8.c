#include <stdio.h>

int main() {
    int marks[5];
    int i, pass = 1;
    float aggregate = 0.0;

    printf("Enter marks for 5 courses:\n");
    for(i = 0; i < 5; i++) {
        printf("Course %d: ", i+1);
        scanf("%d", &marks[i]);

        if(marks[i] < 40) {
            pass = 0; // student fails if any subject < 40
        }
        aggregate += marks[i];
    }

    if(pass) {
        aggregate /= 5.0; // calculate average
        printf("\nResult: PASS\n");
        printf("Aggregate: %.2f\n", aggregate);

        if(aggregate >= 75) {
            printf("Grade: Distinction\n");
        } else if(aggregate >= 60) {
            printf("Grade: First Class\n");
        } else if(aggregate >= 50) {
            printf("Grade: Second Class\n");
        } else {
            printf("Grade: Pass Class\n");
        }
    } else {
        printf("\nResult: FAIL\n");
    }

    return 0;
}
