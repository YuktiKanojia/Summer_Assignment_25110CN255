#include <stdio.h>
// Q116) Write a program to Create inventory management system.

struct Item {
    int id;
    char name[30];
    int quantity;
};

int main() {
    struct Item item[20];
    int n, i, choice, searchId, found;

    printf("Enter number of items: ");
    scanf("%d", &n);

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Items\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (i = 0; i < n; i++) {
                    printf("\nItem %d\n", i + 1);
                    printf("Enter ID: ");
                    scanf("%d", &item[i].id);

                    printf("Enter Name: ");
                    scanf("%s", item[i].name);

                    printf("Enter Quantity: ");
                    scanf("%d", &item[i].quantity);
                }
                break;

            case 2:
                printf("\nInventory Details:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d\n", item[i].id);
                    printf("Name: %s\n", item[i].name);
                    printf("Quantity: %d\n\n", item[i].quantity);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (item[i].id == searchId) {
                        printf("Item Found\n");
                        printf("Name: %s\n", item[i].name);
                        printf("Quantity: %d\n", item[i].quantity);
                        found = 1;
                    }
                }

                if (!found)
                    printf("Item not found.\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}