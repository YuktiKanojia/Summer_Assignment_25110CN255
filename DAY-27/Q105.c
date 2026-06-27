#include <stdio.h>
#include <string.h>
// Q105) Write a program to Create student record management system. 
#define MAX_STUDENTS 100

// Blueprint for one student
struct Student {
    int roll_no;
    char name[30];
    float gpa;
};

int main() {
    // Array to store students
    struct Student students[MAX_STUDENTS];
    int current_total = 0;
    int choice;

    while (1) {
        printf("\n----STUDENT RECORD MANAGEMENT SYSTEM----\n");
        printf("1. Add New Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Delete Student\n");
        printf("5. Exit Program\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);

        // OPTION 1: ADD STUDENT
        if (choice == 1) {
            if (current_total >= MAX_STUDENTS) {
                printf("Error: System memory is full!\n");
            }
            else {
                struct Student new_student;

                printf("Enter Roll Number: ");
                scanf("%d", &new_student.roll_no);

                printf("Enter Name: ");
                scanf(" %29[^\n]", new_student.name);
               // scanf("%s", new_student.name);

                printf("Enter GPA: ");
                scanf("%f", &new_student.gpa);

                students[current_total] = new_student;
                current_total++;

                printf("Student record added successfully!\n");
            }
        }

        // OPTION 2: TO DISPLAY ALL STUDENTS
        else if (choice == 2) {
            if (current_total == 0) {
                printf("No student records found.\n");
            }
            else {
                int i;

                printf("\n--- ALL RECORDS ---\n");

                for (i = 0; i < current_total; i++) {
                    printf("Roll: %d | Name: %s | GPA: %.2f\n",
                           students[i].roll_no,
                           students[i].name,
                           students[i].gpa);
                }
            }
        }

        // OPTION 3: SEARCH STUDENT
        else if (choice == 3) {
            if (current_total == 0) {
                printf("No records available to search.\n");
            }
            else {
                int search_roll;
                int found = 0;
                int i;

                printf("Enter Roll Number to search: ");
                scanf("%d", &search_roll);

                for (i = 0; i < current_total; i++) {
                    if (students[i].roll_no == search_roll) {
                        printf("\nRecord Found!\n");
                        printf("Roll Number: %d\n", students[i].roll_no);
                        printf("Name: %s\n", students[i].name);
                        printf("GPA: %.2f\n", students[i].gpa);

                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("Student with Roll %d not found.\n", search_roll);
                }
            }
        }

        // OPTION 4: TO DELETE STUDENT RECORD
        else if (choice == 4) {
            if (current_total == 0) {
                printf("No records available to delete.\n");
            }
            else {
                int delete_roll;
                int found = 0;
                int i, j;

                printf("Enter Roll Number to delete: ");
                scanf("%d", &delete_roll);

                for (i = 0; i < current_total; i++) {
                    if (students[i].roll_no == delete_roll) {

                        // Shift records left
                        for (j = i; j < current_total - 1; j++) {
                            students[j] = students[j + 1];
                        }

                        current_total--;
                        found = 1;

                        printf("Student deleted successfully!\n");
                        break;
                    }
                }

                if (found == 0) {
                    printf("Student with Roll %d not found.\n", delete_roll);
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