#include <stdio.h>

int main() {
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 40 && mark <= 75) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}
