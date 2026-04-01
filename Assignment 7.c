#include <stdio.h>

#define MAX 50   // maximum number of students

// Structure to hold student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[MAX];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n--- Student Results ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name   : %s\n", students[i].name);
        printf("Marks  : %.2f\n", students[i].marks);

        if (students[i].marks >= 40) {
            printf("Result : PASS\n");
        } else {
            printf("Result : FAIL\n");
        }
        printf("-----------------------\n");
    }

    return 0;
}
