#include <stdio.h>
// Q119) Write a program to create a Mini Employee Management System.

struct Employee {
    int id;
    char name[30];
    char department[30];
    float salary;
};

int main() {
    struct Employee e[20];
    int count = 0;
    int choice, i, id, found, j;

    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Delete Employee Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count == 20) {
                    printf("Employee storage is full.\n");
                    break;
                }

                printf("\nEnter Employee ID: ");
                scanf("%d", &e[count].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", e[count].name);

                printf("Enter Department: ");
                scanf(" %[^\n]", e[count].department);

                printf("Enter Salary: ");
                scanf("%f", &e[count].salary);

                count++;
                printf("Employee record added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No employee records found.\n");
                    break;
                }

                printf("\n========== Employee Records ==========\n");

                for (i = 0; i < count; i++) {
                    printf("\nEmployee %d\n", i + 1);
                    printf("-------------------------\n");
                    printf("Employee ID : %d\n", e[i].id);
                    printf("Name        : %s\n", e[i].name);
                    printf("Department  : %s\n", e[i].department);
                    printf("Salary      : %.2f\n", e[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (e[i].id == id) {
                        printf("\nEmployee Found\n");
                        printf("-------------------------\n");
                        printf("Employee ID : %d\n", e[i].id);
                        printf("Name        : %s\n", e[i].name);
                        printf("Department  : %s\n", e[i].department);
                        printf("Salary      : %.2f\n", e[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee record not found.\n");

                break;

            case 4:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (e[i].id == id) {

                        for (j = i; j < count - 1; j++) {
                            e[j] = e[j + 1];
                        }

                        count--;
                        found = 1;
                        printf("Employee record deleted successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Employee record not found.\n");

                break;

            case 5:
                printf("Exiting the program!!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}