#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter an integer (0 to exit): ");
        scanf("%d", &number);

        if (number == 0) {
            break; // Exit loop
        }

        if (number % 2 == 0) {
            printf("%d is an even number.\n", number);
        } else {
            printf("%d is an odd number.\n", number);
        }

    } while (1); // Infinite loop until 0 is entered

    printf("Program ended.\n");
    return 0;
}
