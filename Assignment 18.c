#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to calculate length
void calculateLength(char str[]) {
    printf("Length of string: %lu\n", strlen(str));
}

// Function to reverse string
void reverseString(char str[]) {
    char rev[100];
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);
}

// Function to check equality
void checkEquality(char str[]) {
    char another[100];
    printf("Enter another string to compare: ");
    scanf("%s", another);
    if (strcmp(str, another) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
}

// Function to check palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

// Function to check substring
void checkSubstring(char str[]) {
    char sub[100];
    printf("Enter substring to search: ");
    scanf("%s", sub);
    if (strstr(str, sub) != NULL)
        printf("Substring found!\n");
    else
        printf("Substring not found.\n");
}

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Calculate Length\n");
        printf("2. Reverse String\n");
        printf("3. Equality Check\n");
        printf("4. Palindrome Check\n");
        printf("5. Check Substring\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculateLength(str);
                break;
            case 2:
                reverseString(str);
                break;
            case 3:
                checkEquality(str);
                break;
            case 4:
                checkPalindrome(str);
                break;
            case 5:
                checkSubstring(str);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
