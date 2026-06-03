#include <stdio.h>
// Q3 Write a program to find the factorial of a given number.
int main() {
    int num, i;
    long long factorial =1;

    printf("Enter the number :");
    // fflush(stdout);
    scanf("%d", &num);

    for(i=1; i<=num; i++){
         factorial = factorial*i;
        }

    printf("Factorial of %d = %lld \n",num,factorial);
    return 0;
    }