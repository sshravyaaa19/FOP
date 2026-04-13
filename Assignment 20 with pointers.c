#include <stdio.h>

void swapWithPointers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);

    swapWithPointers(&x, &y);

    printf("After swap (with pointers): x = %d, y = %d\n", x, y);
    return 0;
}
🔹 
