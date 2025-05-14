#include <stdio.h>

int main() {
    int year;

    do {
        printf("Enter a year (0 to exit): ");
        scanf("%d", &year);

        if (year == 0) {
            break; // Exit loop
        }

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }

    } while (1); // Loop until 0 is entered

    printf("Program ended.\n");
    return 0;
}
