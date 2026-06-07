#include <stdio.h>
//Q25) Write a program to Recursive factorial.
int factorial(int n) {
    if(n==0||n==1)
        return 1;

    return n*factorial(n-1);
}

int main(){
    int n;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial = %d", factorial(n));

    return 0;
}