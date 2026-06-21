#include <stdio.h>
// Q82) Write a program to Reverse a string.

int main() {
    char str[50], rev[50];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for(i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }

    rev[length] = '\0';

    printf("Reversed string = %s\n", rev);

    return 0;
}