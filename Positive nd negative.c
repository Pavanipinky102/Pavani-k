#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number (999 to exit): ");
        scanf("%d", &number);

        if (number == 999) {
            break; // Exit the loop
        }

        if (number > 0) {
            printf("The number is positive.\n");
        } else if (number < 0) {
            printf("The number is negative.\n");
        } else {
            printf("The number is zero.\n");
        }

    } while (1); // Infinite loop, exits only when 999 is entered

    printf("Program ended.\n");
    return 0;
}
