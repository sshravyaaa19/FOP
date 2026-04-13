#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stringLength(char str[]) {
    printf("Length of string: %lu\n", strlen(str));
}

void stringCopy(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);
}

void stringConcat(char str[]) {
    char another[100];
    printf("Enter another string to concatenate: ");
    scanf("%s", another);
    strcat(str, another);
    printf("Concatenated string: %s\n", str);
}

void stringCompare(char str[]) {
    char another[100];
    printf("Enter another string to compare: ");
    scanf("%s", another);
    if (strcmp(str, another) == 0)
        printf("Strings are equal.\n");
     else
        printf("Strings are not equal.\n");
}

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                stringLength(str);
                break;
             case 2:
                 stringCopy(str);
                break;
            case 3:
                stringConcat(str);
                break;
            case 4:
                stringCompare(str);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
