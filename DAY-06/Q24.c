#include <stdio.h>
//Q24)Write a program to Find x^n without pow().
int main() {
    int x, n;
    long long result=1;

    printf("Enter base and exponent: ");
    scanf("%d%d",&x,&n);

    for (int i=1; i<= n; i++) {
        result *= x;
    }
   printf("%d^%d = %lld", x, n, result);
    return 0;
}