#include <stdio.h>
#include <string.h>

// Q115) Write a program to create a menu-driven string operations system.

int main() {
    char str[50];
    int choice, i, vowels, consonants;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n--- String Menu ---\n");
        printf("1. Find the Length of the String\n");
        printf("2. Convert the String to Uppercase\n");
        printf("3. Count Vowels and Consonants\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of the string = %lu\n", strlen(str));
                break;

            case 2:
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase string: %s\n", str);
                break;

            case 3:
                vowels = 0;
                consonants = 0;

                for (i = 0; str[i] != '\0'; i++) {
                    char ch = str[i];

                    if (ch >= 'A' && ch <= 'Z')
                        ch = ch + 32;

                    if (ch == 'a' || ch == 'e' || ch == 'i' ||
                        ch == 'o' || ch == 'u') {
                        vowels++;
                    }
                    else if (ch >= 'a' && ch <= 'z') {
                        consonants++;
                    }
                }

                printf("Number of vowels = %d\n", vowels);
                printf("Number of consonants = %d\n", consonants);
                break;

            case 4:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}