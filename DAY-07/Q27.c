#include <stdio.h>
//Q27) Write a program to Recursive sum of digits.
int SumDigits(int n) {
    if(n==0)
    return 0;

    return (n%10) + SumDigits(n/10);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", SumDigits(n));

    return 0;
}