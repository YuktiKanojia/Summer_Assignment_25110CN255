#include <stdio.h>
//Q28) Write a program to Recursive reverse number. 
int reverse=0;
int reverseNumber(int n) {
    if(n==0)
    return reverse;

    reverse=reverse*10 + (n%10);

    return reverseNumber(n/10);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Reversed Number = %d", reverseNumber(n));

    return 0;
}