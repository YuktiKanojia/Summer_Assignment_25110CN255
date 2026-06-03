#include <stdio.h>
// Q8) Write a program to Check whether a number is palindrome or not.
int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        digit = num % 10;                 // To get last digit
        reverse = reverse * 10 + digit;  // Reverse number
        num = num / 10;                  // Remove last digit
    }

    if(original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}