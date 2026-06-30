#include <stdio.h>
// Q117) Write a program to create a Student Record Management System using arrays and strings.

struct Student {
    int roll;
    char name[30];
    int age;
    float marks;
};

int main() {
    struct Student s[20];
    int count = 0;
    int choice, i, roll, found, j;

    do {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Delete Student Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count == 20) {
                    printf("Record storage is full.\n");
                    break;
                }

                printf("\nEnter Roll Number: ");
                scanf("%d", &s[count].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[count].name);

                printf("Enter Age: ");
                scanf("%d", &s[count].age);

                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);

                count++;
                printf("Student record added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No student records found.\n");
                    break;
                }

                printf("\n========== Student Records ==========\n");

                for (i = 0; i < count; i++) {
                    printf("\nStudent %d\n", i + 1);
                    printf("-------------------------\n");
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Age         : %d\n", s[i].age);
                    printf("Marks       : %.2f\n", s[i].marks);
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No student records found.\n");
                    break;
                }

                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (s[i].roll == roll) {
                        printf("\nStudent Record Found\n");
                        printf("-------------------------\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Age         : %d\n", s[i].age);
                        printf("Marks       : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student record not found.\n");

                break;

            case 4:
                if (count == 0) {
                    printf("No student records found.\n");
                    break;
                }

                printf("Enter Roll Number to delete: ");
                scanf("%d", &roll);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (s[i].roll == roll) {

                        for (j = i; j < count - 1; j++) {
                            s[j] = s[j + 1];
                        }

                        count--;
                        found = 1;
                        printf("Student record deleted successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Student record not found.\n");

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