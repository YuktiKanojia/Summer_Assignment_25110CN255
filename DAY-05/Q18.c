#include <stdio.h>
//Q18) Write a program to Check strong number.
int main() { 

    int n,temp, rem, sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp= n;

    while(temp >0) {
        rem = temp%10;

        int fact = 1;
        for(int i=1; i<=rem; i++) {
            fact *= i;
        }

        sum+=fact;
        temp/=10;
    }

    if(sum==n)
        printf("%d is a Strong Number", n);
    else
        printf("%d is Not a Strong Number", n);

 return 0;
}