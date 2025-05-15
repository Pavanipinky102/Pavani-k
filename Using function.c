#include <stdio.h>

char sumArray(char arr[], char size) {
    char sum = 0;
    char i;

    for(i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    char numbers[] = {10, 20, 30, 40, 50};
    char size = 5;
    char result;

    result = sumArray(numbers, size);

    printf("Sum = %d\n", result);

    return 0;
}
