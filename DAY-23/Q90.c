#include <stdio.h>
// Q90) Write a program to Find first repeating character.
int main() {
    char str[50];
    int i, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                printf("First repeating character = %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.\n");
    return 0;
}