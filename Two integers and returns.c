#include <stdio.h>

// Function that takes two integers and returns the sum
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}
