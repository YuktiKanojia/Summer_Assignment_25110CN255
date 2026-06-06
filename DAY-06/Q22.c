#include <stdio.h>
//Q22) Write a program to Convert binary to decimal
int main() {
    int binary, rem;
    int decimal=0, base=1;

    printf("Enter the binary number:");
    scanf("%d", &binary);

    while (binary>0) {
        rem= binary%10;
        decimal += rem*base;
        base *= 2;
        binary/=10;
     }

    printf("Decimal = %d", decimal);

    return 0;
}