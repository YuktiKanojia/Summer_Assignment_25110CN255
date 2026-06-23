#include <stdio.h>
// Q96) Write a program to Remove duplicate characters.
int main() {
    char str[50];
    int i = 0, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    while (str[i] != '\n' && str[i] != '\0')
        i++;
    str[i] = '\0';

    // Check every character
    for (i = 0; str[i] != '\0'; i++) {

        // Compare with remaining characters
        for (j = i + 1; str[j] != '\0'; ) {

            if (str[i] == str[j]) {
                // Shift characters left
                for (k = j; str[k] != '\0'; k++)
                    str[k] = str[k + 1];
            }
            else {
                j++;
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}