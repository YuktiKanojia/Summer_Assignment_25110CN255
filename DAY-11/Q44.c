#include <stdio.h>
//Q44) Write a program to Write function to find factorial.
int factorial(int n) {
    int i, f= 1;
    
    for (i=1; i<=n; i++) {
        f=f * i;
    }

 return f;
}

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}