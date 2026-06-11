#include <stdio.h>
//Q43) Write a program to Write function to check prime. 
int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i=2; i<n; i++) {
        if (n%i==0)
            return 0;
    }
    return 1;
}
int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime number");
    else
        printf("Not Prime");

    return 0;
}