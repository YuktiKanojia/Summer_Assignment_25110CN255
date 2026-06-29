#include <stdio.h>
// Q114) Write a program to Create menu-driven array operations system.

int main() {
    int a[20], n, i, choice, sum = 0, largest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do {
        printf("\n--- Array Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Largest Element\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++)
                    sum += a[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
                largest = a[0];
                for (i = 1; i < n; i++)
                    if (a[i] > largest)
                        largest = a[i];
                printf("Largest = %d\n", largest);
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