#include <stdio.h>
#include <math.h>
//Q16) Write a program to Print Armstrong numbers in a range.
int main() {
    int start, end, num, temp, rem, digits;
    long long sum;

    printf("Enter the range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers are:\n");
    for(num = start; num <= end; num++) {

        digits = 0;
        temp = num;

        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while(temp > 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}