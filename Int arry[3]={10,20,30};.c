#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int sum = 0;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
