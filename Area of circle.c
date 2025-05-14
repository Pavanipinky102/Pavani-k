#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area;

    do {
        printf("Enter radius of the circle (0 to exit): ");
        scanf("%f", &radius);

        if (radius == 0) {
            break; // Exit the loop
        } else if (radius < 0) {
            printf("Radius cannot be negative.\n");
        } else {
            area = PI * radius * radius;
            printf("Area of the circle: %.2f\n", area);
        }

    } while (1); // Infinite loop until radius is 0

    printf("Program ended.\n");
    return 0;
}
