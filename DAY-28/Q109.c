#include <stdio.h>
// Q109) Write a program to Create library management system.
#define MAX_BOOKS 100

struct Book {
    int id;
    char title[30];
    char author[30];
};

int main() {
    struct Book books[MAX_BOOKS];
    int total = 0;
    int choice, i, j, id;

    while (1) {
        printf("\n---- LIBRARY MANAGEMENT SYSTEM ----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (total == MAX_BOOKS) {
                printf("Library is full!\n");
            } else {
                printf("Enter Book ID: ");
                scanf("%d", &books[total].id);

                printf("Enter Book Title: ");
                scanf(" %29[^\n]", books[total].title);

                printf("Enter Author Name: ");
                scanf(" %29[^\n]", books[total].author);

                total++;
                printf("Book added successfully!\n");
            }
        }

        else if (choice == 2) {
            if (total == 0) {
                printf("No books available.\n");
            } else {
                printf("\n--- BOOK LIST ---\n");

                for (i = 0; i < total; i++) {
                    printf("ID: %d | Title: %s | Author: %s\n",
                           books[i].id,
                           books[i].title,
                           books[i].author);
                }
            }
        }

        else if (choice == 3) {
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < total; i++) {
                if (books[i].id == id) {
                    printf("Book Found!\n");
                    printf("ID: %d\n", books[i].id);
                    printf("Title: %s\n", books[i].title);
                    printf("Author: %s\n", books[i].author);
                    break;
                }
            }

            if (i == total)
                printf("Book not found.\n");
        }

        else if (choice == 4) {
            printf("Enter Book ID to delete: ");
            scanf("%d", &id);

            for (i = 0; i < total; i++) {
                if (books[i].id == id) {
                    for (j = i; j < total - 1; j++) {
                        books[j] = books[j + 1];
                    }

                    total--;
                    printf("Book deleted successfully!\n");
                    break;
                }
            }

            if (i == total)
                printf("Book not found.\n");
        }

        else if (choice == 5) {
            printf("Program ended.\n");
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}