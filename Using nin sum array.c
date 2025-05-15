#include <stdio.h>

int main() {
    char arr[] = {10, 20, 30, 40, 50};
    char sum = 0;
    char i;

    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
