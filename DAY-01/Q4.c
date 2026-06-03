#include <stdio.h>
// Q4 Write a program to count digits in a number.
int main() {
    int num, count = 0;

    printf("Enter the number :");
    // fflush(stdout);
    scanf("%d", &num);

    while(num != 0){
        num = num / 10;
        count++;
    }
    
    printf("Total digits= %d \n", count);

    return 0;
    }