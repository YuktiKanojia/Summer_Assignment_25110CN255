#include <stdio.h>
// Q118) Write a program to create a Mini Library System.

struct Book {
    int id;
    char title[50];
    char author[30];
    int copies;
};

int main() {
    struct Book b[20];
    int count = 0;
    int choice, i, id, found;

    do {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count == 20) {
                    printf("Library is full.\n");
                    break;
                }

                printf("\nEnter Book ID: ");
                scanf("%d", &b[count].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", b[count].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[count].author);

                printf("Enter Number of Copies: ");
                scanf("%d", &b[count].copies);

                count++;
                printf("Book added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No books available.\n");
                    break;
                }

                printf("\n========== Library Books ==========\n");

                for (i = 0; i < count; i++) {
                    printf("\nBook %d\n", i + 1);
                    printf("-------------------------\n");
                    printf("Book ID : %d\n", b[i].id);
                    printf("Title   : %s\n", b[i].title);
                    printf("Author  : %s\n", b[i].author);
                    printf("Copies  : %d\n", b[i].copies);
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (b[i].id == id) {
                        printf("\nBook Found\n");
                        printf("-------------------------\n");
                        printf("Book ID : %d\n", b[i].id);
                        printf("Title   : %s\n", b[i].title);
                        printf("Author  : %s\n", b[i].author);
                        printf("Copies  : %d\n", b[i].copies);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (b[i].id == id) {
                        found = 1;

                        if (b[i].copies > 0) {
                            b[i].copies--;
                            printf("Book issued successfully.\n");
                        } else {
                            printf("No copies available.\n");
                        }

                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (b[i].id == id) {
                        b[i].copies++;
                        printf("Book returned successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 6:
                printf("Exiting the program!!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}