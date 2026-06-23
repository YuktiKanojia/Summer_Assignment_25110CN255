#include <stdio.h>
// Q92) Write a program to Find maximum occurring character.
int main() {
    char str[50], maxChar;
    int i, j, count, maxCount = 0, length = 0;

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
        if (count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", maxCount);
    return 0;
}