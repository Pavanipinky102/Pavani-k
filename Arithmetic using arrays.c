#include <stdio.h>

#define SIZE 5

int main() {
    int a[SIZE], b[SIZE], sum[SIZE], diff[SIZE], prod[SIZE];
    float div[SIZE];

    printf("Enter %d elements for array A:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter %d elements for array B:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        sum[i] = a[i] + b[i];
        diff[i] = a[i] - b[i];
        prod[i] = a[i] * b[i];
        if (b[i] != 0)
            div[i] = (float)a[i] / b[i];
        else
            div[i] = 0.0; // Handle division by zero
    }

    printf("\nResults:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("A[%d]=%d, B[%d]=%d --> Sum=%d, Diff=%d, Prod=%d, Div=%.2f\n",
               i, a[i], i, b[i], sum[i], diff[i], prod[i], div[i]);
    }

    return 0;
}
