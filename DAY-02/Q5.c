#include <stdio.h>
// Q5) Write a program to Find sum of digits of a number.
int main(){
    int num, sum = 0, digit;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;   // To get last digit
        sum = sum + digit;  // Adding digit to sum
        num = num / 10;     // Remove last digit
    }

    printf("Sum of digits of the number = %d", sum);

    return 0;
}