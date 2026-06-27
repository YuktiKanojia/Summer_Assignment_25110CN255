#include <stdio.h>
#include <string.h>
// Q106) Write a program to Create employee management system.
#define MAX_EMPLOYEES 100

// Blueprint for one employee
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    // Array to store employees
    struct Employee employees[MAX_EMPLOYEES];
    int current_total = 0;
    int choice;

    while (1) {
        printf("\n----EMPLOYEE MANAGEMENT SYSTEM----\n");
        printf("1. Add New Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search by Employee ID\n");
        printf("4. Delete Employee\n");
        printf("5. Exit Program\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);

        // OPTION 1: ADD EMPLOYEE
        if (choice == 1) {
            if (current_total >= MAX_EMPLOYEES) {
                printf("Error: System memory is full!\n");
            }
            else {
                struct Employee new_employee;

                printf("Enter Employee ID: ");
                scanf("%d", &new_employee.id);

                printf("Enter Employee Name: ");
                scanf(" %29[^\n]", new_employee.name);

                printf("Enter Salary: ");
                scanf("%f", &new_employee.salary);

                employees[current_total] = new_employee;
                current_total++;

                printf("Employee record added successfully!\n");
            }
        }

        // OPTION 2: DISPLAY ALL EMPLOYEES
        else if (choice == 2) {
            if (current_total == 0) {
                printf("No employee records found.\n");
            }
            else {
                int i;

                printf("\n--- ALL EMPLOYEE RECORDS ---\n");

                for (i = 0; i < current_total; i++) {
                    printf("ID: %d | Name: %s | Salary: %.2f\n",
                           employees[i].id,
                           employees[i].name,
                           employees[i].salary);
                }
            }
        }

        // OPTION 3: SEARCH EMPLOYEE
        else if (choice == 3) {
            if (current_total == 0) {
                printf("No records available to search.\n");
            }
            else {
                int search_id;
                int found = 0;
                int i;

                printf("Enter Employee ID to search: ");
                scanf("%d", &search_id);

                for (i = 0; i < current_total; i++) {
                    if (employees[i].id == search_id) {
                        printf("\nRecord Found!\n");
                        printf("Employee ID: %d\n", employees[i].id);
                        printf("Name: %s\n", employees[i].name);
                        printf("Salary: %.2f\n", employees[i].salary);

                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("Employee with ID %d not found.\n", search_id);
                }
            }
        }

        // OPTION 4: DELETE EMPLOYEE
        else if (choice == 4) {
            if (current_total == 0) {
                printf("No records available to delete.\n");
            }
            else {
                int delete_id;
                int found = 0;
                int i, j;

                printf("Enter Employee ID to delete: ");
                scanf("%d", &delete_id);

                for (i = 0; i < current_total; i++) {
                    if (employees[i].id == delete_id) {

                        // Shift records left
                        for (j = i; j < current_total - 1; j++) {
                            employees[j] = employees[j + 1];
                        }

                        current_total--;
                        found = 1;

                        printf("Employee deleted successfully!\n");
                        break;
                    }
                }

                if (found == 0) {
                    printf("Employee with ID %d not found.\n", delete_id);
                }
            }
        }

        // OPTION 5: EXIT
        else if (choice == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        // INVALID CHOICE
        else {
            printf("Invalid! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}