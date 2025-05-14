#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number);

        if (number == 0) {
            break; // Exit loop
        }

        if (number % 3 == 0 && number % 4 == 0) {
            printf("%d is divisible by both 3 and 4.\n", number);
        } else {
            printf("%d is NOT divisible by both 3 and 4.\n", number);
        }

    } while (1); // Loop continues until 0 is entered

    printf("Program ended.\n");
    return 0;
}
