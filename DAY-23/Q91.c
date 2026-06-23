#include <stdio.h>
// Q91) Write a program to Check anagram strings.
int main() {
    char str1[50], str2[50];
    int i, j, count1 = 0, count2 = 0;
    int freq1[128] = {0}, freq2[128] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[count1] != '\0' && str1[count1] != '\n')
        count1++;

    while (str2[count2] != '\0' && str2[count2] != '\n')
        count2++;

    if (count1 != count2) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; i < count1; i++)
        freq1[str1[i]]++;

    for (i = 0; i < count2; i++)
        freq2[str2[i]]++;

    for (i = 0; i < 128; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}