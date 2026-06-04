#include <stdio.h>
#include <math.h>
//Q15) Write a program to Check Armstrong number.
int main() {
    int num, temp, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp > 0) {
        count++;
        temp /= 10;
    }
    
    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}