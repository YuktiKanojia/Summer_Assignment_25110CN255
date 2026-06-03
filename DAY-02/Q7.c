#include <stdio.h>
// Q7) Write a program to Find product of digits.
int main() {
    int num, digit, product = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;             // To get last digit
        product = product * digit;   // Multiply digit
        num = num / 10;              // Remove last digit
    }

    printf("The product of digits = %d", product);

    return 0;
}