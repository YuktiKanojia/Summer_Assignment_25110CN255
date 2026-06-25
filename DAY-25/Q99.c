#include <stdio.h>
#include <string.h>
// Q99) Write a program to Sort names alphabetically.

int main() {
    int n, i, j;
    char temp[30];

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // Remove newline

    char names[n][30];

    printf("Enter the names:\n");
    for (i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);

        // Remove newline character
        for (j = 0; names[i][j] != '\0'; j++) {
            if (names[i][j] == '\n') {
                names[i][j] = '\0';
                break;
            }
        }
    }

    // Sort names alphabetically
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}