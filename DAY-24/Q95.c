#include <stdio.h>
// Q95) Write a program to Find longest word.
int main() {
    char str[70], longest[20];
    int i = 0, j, len = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {

        // End of a word
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            // Save word if it is longest
            if (len > max) {
                max = len;

                for (j = 0; j < len; j++)
                    longest[j] = str[i - len + j];

                longest[len] = '\0';
            }

            len = 0;

            if (str[i] == '\n' || str[i] == '\0')
                break;
        }
        else {
            len++;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}