#include <stdio.h>

#define SIZE 10

// Function to add two matrices
void addMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int r, int c) {
    int sum[SIZE][SIZE];
    printf("\nResultant Matrix after Addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to find saddle point
void saddlePoint(int a[SIZE][SIZE], int r, int c) {
    int found = 0;
    for (int i = 0; i < r; i++) {
        int minRow = a[i][0], colIndex = 0;
        for (int j = 1; j < c; j++) {
            if (a[i][j] < minRow) {
                minRow = a[i][j];
               colIndex = j;
            }
        }
        int k;
        for (k = 0; k < r; k++) {
            if (a[k][colIndex] > minRow)
                break;
        }
        if (k == r) {
            printf("\nSaddle Point found at (%d,%d) = %d\n", i, colIndex, minRow);
            found = 1;
        }
    }
    if (!found)
        printf("\nNo Saddle Point found.\n");
}

// Function to find inverse of 2x2 matrix
void inverseMatrix(float a[2][2]) {
    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    if (det == 0) {
        printf("\nInverse not possible (Determinant = 0).\n");
        return;
    }
    float inv[2][2];
    inv[0][0] = a[1][1]/det;
    inv[0][1] = -a[0][1]/det;
    inv[1][0] = -a[1][0]/det;
    inv[1][1] = a[0][0]/det;

    printf("\nInverse of Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%.2f\t", inv[i][j]);
        printf("\n");
    }
}

void magicSquare(int a[SIZE][SIZE], int n) {
    int sumDiag1 = 0, sumDiag2 = 0;
    for (int i = 0; i < n; i++) {
        sumDiag1 += a[i][i];
        sumDiag2 += a[i][n-i-1];
    }
    if (sumDiag1 != sumDiag2) {
        printf("\nNot a Magic Square.\n");
        return;
    }
    int sumRow, sumCol;
    for (int i = 0; i < n; i++) {
        sumRow = sumCol = 0;
        for (int j = 0; j < n; j++) {
            sumRow += a[i][j];
            sumCol += a[j][i];
        }
        if (sumRow != sumDiag1 || sumCol != sumDiag1) {
            printf("\nNot a Magic Square.\n");
            return;
        }
    }
    printf("\nIt is a Magic Square!\n");
}

int main() {
    int choice;
    do {
        printf("\n--- Matrix Operations Menu ---\n");
        printf("1. Matrix Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse of 2x2 Matrix\n");
        printf("4. Magic Square Check\n");
       printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int r, c;
            int a[SIZE][SIZE], b[SIZE][SIZE];
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);
            printf("Enter elements of Matrix A:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);
            printf("Enter elements of Matrix B:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &b[i][j]);
            addMatrix(a, b, r, c);
        }
        else if (choice == 2) {
            int r, c, a[SIZE][SIZE];
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);
            printf("Enter elements of Matrix:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);
            saddlePoint(a, r, c);
        }
        else if (choice == 3) {
            float a[2][2];
            printf("Enter elements of 2x2 Matrix:\n");
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    scanf("%f", &a[i][j]);
            inverseMatrix(a);
        }
 else if (choice == 4) {
            int n, a[SIZE][SIZE];
            printf("Enter size of square matrix: ");
            scanf("%d", &n);
            printf("Enter elements of Matrix:\n");
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &a[i][j]);
            magicSquare(a, n);
        }
        else if (choice == 5) {
            printf("Exiting program.\n");
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

