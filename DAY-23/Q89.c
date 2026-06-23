#include <stdio.h>
// Q89) Write a program to Find first non-repeating character.
int main() {
    char str[50];
    int i, j, count, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length; i++) {
        count = 0;

        for (j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}