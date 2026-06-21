#include <stdio.h>
// Q81) Write a program to Find string length without strlen().
int main() {
    char str[50];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    printf("Length of string = %d\n", length);
    
    return 0;
}