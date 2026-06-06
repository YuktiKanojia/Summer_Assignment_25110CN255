#include <stdio.h>
//Q23) Write a program to Count set bits in a number.
int main() {
    int num, count = 0;

    printf("Enter the number:");
    scanf("%d",&num);

    while (num>0) {
        if (num%2 == 1)
            count++;
        num = num/2;
    }

    printf("Number of set bits = %d",count);

    return 0;
}