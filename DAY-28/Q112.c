#include <stdio.h>
#include <string.h>
// Q112) Write a program to Create contact management system.
#define MAX_CONTACTS 100

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int total = 0;
    int choice, i, j;
    char search[15];

    while (1) {
        printf("\n---- CONTACT MANAGEMENT SYSTEM ----\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // ADD CONTACT
        if (choice == 1) {
            if (total == MAX_CONTACTS) {
                printf("Contact list is full!\n");
            } else {
                printf("Enter Name: ");
                scanf(" %29[^\n]", contacts[total].name);

                printf("Enter Phone Number: ");
                scanf(" %14s", contacts[total].phone);

                total++;
                printf("Contact added successfully!\n");
            }
        }

        // DISPLAY ALL CONTACTS
        else if (choice == 2) {
            if (total == 0) {
                printf("No contacts found.\n");
            } else {
                printf("\n--- CONTACT LIST ---\n");

                for (i = 0; i < total; i++) {
                    printf("%d. %s - %s\n",
                           i + 1,
                           contacts[i].name,
                           contacts[i].phone);
                }
            }
        }

        // SEARCH CONTACT
        else if (choice == 3) {
            printf("Enter Phone Number to search: ");
            scanf(" %14s", search);

            for (i = 0; i < total; i++) {
                if (strcmp(contacts[i].phone, search) == 0) {
                    printf("\nContact Found!\n");
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    break;
                }
            }

            if (i == total)
                printf("Contact not found.\n");
        }

        // DELETE CONTACT
        else if (choice == 4) {
            printf("Enter Phone Number to delete: ");
            scanf(" %14s", search);

            for (i = 0; i < total; i++) {
                if (strcmp(contacts[i].phone, search) == 0) {
                    for (j = i; j < total - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }

                    total--;
                    printf("Contact deleted successfully!\n");
                    break;
                }
            }

            if (i == total)
                printf("Contact not found.\n");
        }

        // EXIT
        else if (choice == 5) {
            printf("Program ended.\n");
            break;
        }

        // INVALID CHOICE
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}