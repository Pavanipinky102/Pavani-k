#include <stdio.h>

int main() {
    char name[50];
    int rollNumber;
    float marks;

    // Input student details
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin); // Taking name input
    printf("Enter roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter marks: ");
    scanf("%f", &marks);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Name: %s", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Marks: %.2f\n", marks);

    return 0;
}
