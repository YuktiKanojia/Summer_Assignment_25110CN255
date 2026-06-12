#include <stdio.h>
//Q46) Write a program to Write function for Armstrong. 
int armstrong(int n) {
    int original=n;
    int sum=0, rem;

    while(n>0) {
        rem = n%10;
        sum = sum+(rem * rem * rem);
        n = n/10;
    }

    if(original == sum)
        return 1;
    else
        return 0;
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}