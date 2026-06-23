#include <stdio.h>
// Q94) Write a program to Compress a string.
int main() {
    char str[50];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    while (str[i] != '\n' && str[i] != '\0')
        i++;
    str[i] = '\0';

    i = 0;

    while (str[i] != '\0') {
        count = 1;

        // Count consecutive same characters
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
        i++;
    }

    return 0;
}