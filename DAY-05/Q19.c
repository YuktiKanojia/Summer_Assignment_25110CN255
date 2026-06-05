#include <stdio.h>
//Q19) Write a program to Print factors of a number.
int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factors of %d are:\n", n);

    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            printf("%d ",i);
        }
    }
return 0;
}