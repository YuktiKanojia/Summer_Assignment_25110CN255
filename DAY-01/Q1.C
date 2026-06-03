#include <stdio.h>
// Q1 Write a program to Calculate sum of first N natural numbers.
int main() {
    int num, i, sum=0;

     printf("Enter the number for calculating the sum:");
    //fflush(stdout);
     scanf("%d", &num);

    for(i=1; i<=num; i++){
          sum= sum + i;
        }
    printf("sum of first %d numbers is %d",num,sum);

    return 0;
}