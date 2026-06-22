#include <stdio.h>
// Q86) Write a program to Count words in a sentence.

int main() {
    char str[50];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n')
        words = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' &&
            str[i + 1] != '\0' && str[i + 1] != '\n') {
            words++;
        }
        i++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}