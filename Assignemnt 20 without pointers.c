void swapWithoutPointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swap (without pointers): a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);

    swapWithoutPointers(x, y);

    // Note: Original x and y remain unchanged
    printf("Original values still: x = %d, y = %d\n", x, y);
    return 0;
}
