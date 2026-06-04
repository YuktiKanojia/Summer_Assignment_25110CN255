#include <stdio.h>
//Q14) Write a program to Find nth Fibonacci term.
int main() {
    int n, a =0, b =1, c;

    printf("Enter n (Nth term): ");
    scanf("%d", &n);

    if(n == 1)
        printf("Nth Fibonacci Term = %d",a);
    else if(n == 2)
        printf("Nth Fibonacci Term = %d",b);
    else {
        for(int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci Term = %d",b);
    }

    return 0;
}