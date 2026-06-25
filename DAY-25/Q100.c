#include <stdio.h>
#include <string.h>
// Q100) Write a program to Sort words by length.

int main() {
    int n, i, j;
    char temp[30];

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar(); // Remove newline

    char words[n][30];

    printf("Enter the words:\n");
    for (i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);

        // Remove newline character
        for (j = 0; words[i][j] != '\0'; j++) {
            if (words[i][j] == '\n') {
                words[i][j] = '\0';
                break;
            }
        }
    }

    // Sort according to length of words
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}