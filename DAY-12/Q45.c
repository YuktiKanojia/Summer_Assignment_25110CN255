#include <stdio.h>
//Q45) Write a program to Write function for palindrome.
int palindrome(int n) {
    int rev = 0, temp = n;
    
    while (temp > 0) {
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    return (n==rev);
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}