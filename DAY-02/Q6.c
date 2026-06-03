#include <stdio.h>
// Q6) Write a program to Reverse a number.
int main() {
    int num, reverse = 0, digit;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;                // Get last digit
        reverse = reverse * 10 + digit;  // To build reversed number
        num = num / 10;                  // Remove last digit
    }

    printf("Reversed number = %d", reverse);

    return 0;
}