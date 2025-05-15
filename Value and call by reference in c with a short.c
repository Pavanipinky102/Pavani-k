#include <stdio.h>

// Call by value
void callByValue(int a) {
    a = a + 10;
    printf("Inside callByValue: a = %d\n", a);
}

// Call by reference
void callByReference(int *b) {
    *b = *b + 10;
    printf("Inside callByReference: b = %d\n", *b);
}

int main() {
    int x = 5, y = 5;

    callByValue(x);
    printf("After callByValue: x = %d\n", x);

    callByReference(&y);
    printf("After callByReference: y = %d\n", y);

    return 0;
}
