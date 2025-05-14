#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number);
        printf("You entered: %d\n", number);
    } while (number != 0);

    printf("Program ended.\n");
    return 0;
}
