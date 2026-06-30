#include <stdio.h>
#include <string.h>
// Q120) Develop a complete mini project using arrays, strings, and functions.

struct Cupcake {
    char name[30];
    char flavor[30];
    char infusion[30];
    int sweetness;
};

void bakeCupcake(struct Cupcake menu[], int *count) {
    if (*count >= 3) {
        printf("\nThe display case is full!\n");
        return;
    }

    printf("\nName your cupcake: ");
    scanf(" %[^\n]", menu[*count].name);

    printf("Enter the flavor profile (e.g., Lavender Lemon): ");
    scanf(" %[^\n]", menu[*count].flavor);

    printf("Enter the magic infusion (e.g., Cozy Hugs, Stardust): ");
    scanf(" %[^\n]", menu[*count].infusion);

    printf("Enter the sweetness level (1-10): ");
    scanf("%d", &menu[*count].sweetness);

    printf("\nYour cupcake has been baked successfully!\n");

    (*count)++;
}

void viewGallery(struct Cupcake menu[], int count) {
    int i;

    if (count == 0) {
        printf("\nOnly the sweet scent of empty trays remains.\n");
        return;
    }

    printf("\n========== THE BAKERY GALLERY ==========\n");

    for (i = 0; i < count; i++) {
        printf("\nCupcake %d\n", i + 1);
        printf("--------------------------------\n");
        printf("Name       : %s\n", menu[i].name);
        printf("Flavor     : %s\n", menu[i].flavor);
        printf("Infusion   : %s\n", menu[i].infusion);
        printf("Sweetness  : %d/10 Hearts\n", menu[i].sweetness);
    }
}

int main() {
    struct Cupcake bakery[3];
    int choice, count = 0;

    do {
        printf("\n===== MINI BAKERY =====\n");
        printf("1. Bake a Cupcake\n");
        printf("2. View Bakery Gallery\n");
        printf("3. Close the Shop\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bakeCupcake(bakery, &count);
                break;

            case 2:
                viewGallery(bakery, count);
                break;

            case 3:
                printf("\nThe bakery is now closed. See you tomorrow!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}