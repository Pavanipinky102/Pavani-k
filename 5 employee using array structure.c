#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[SIZE];
    int i;
    printf("Enter information for %d employees:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEmployee Information:\n");
    for (i = 0; i < SIZE; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
