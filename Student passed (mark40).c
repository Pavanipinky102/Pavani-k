#include <stdio.h>

int main() {
    char name[50];
    int rollNumber;
    float marks;

    // Input student details
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);  // Taking name input
    printf("Enter roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter marks: ");
    scanf("%f", &marks);

    // Check if the student has passed or failed
    if (marks >= 40) {
        printf("\nStudent Details:\n");
        printf("Name: %s", name);
        printf("Roll Number: %d\n", rollNumber);
        printf("Marks: %.2f\n", marks);
        printf("Status: Passed\n");
    } else {
        printf("\nStudent Details:\n");
        printf("Name: %s", name);
        printf("Roll Number: %d\n", rollNumber);
        printf("Marks: %.2f\n", marks);
        printf("Status: Failed\n");
    }

    return 0;
}
