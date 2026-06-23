#include <stdio.h>
// Q93) Write a program to Check string rotation.
int main() {
    char str1[20], str2[20], temp[40];
    int i, j = 0, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from string
    while (str1[len1] != '\n' && str1[len1] != '\0')
        len1++;
    str1[len1] = '\0';

    while (str2[len2] != '\n' && str2[len2] != '\0')
        len2++;
    str2[len2] = '\0';

    // Rotation is possible only if lengths are equal
    if (len1 != len2) {
        printf("Strings are not rotations.\n");
        return 0;
    }

    // Make a new string by joining str1 with itself
    for (i = 0; i < len1; i++)
        temp[j++] = str1[i];

    for (i = 0; i < len1; i++)
        temp[j++] = str1[i];

    temp[j] = '\0';

    // Search for str2 inside temp
    for (i = 0; i < len1; i++) {
        int k = 0;

        while (temp[i + k] == str2[k] && str2[k] != '\0')
            k++;

        if (str2[k] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Strings are rotations.\n");
    else
        printf("Strings are not rotations.\n");

    return 0;
}