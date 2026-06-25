#include <stdio.h>
// Q98) Write a program to Find common characters in strings.
int main() {
    char str1[50], str2[50];
    int i, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Common characters are: ");

    // Check every character of first string
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n')
            continue;

        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break; // Move to next character
            }
        }
    }

    return 0;
}