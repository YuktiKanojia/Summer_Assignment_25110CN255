#include <stdio.h>
//Q17) Write a program to Check perfect number.
int main() {
    
   int n,sum = 0;
   printf("Enter the number: ");
   scanf("%d",&n);

    for(int i=1; i<n; i++) {
        if(n%i == 0) {
            sum += i;
        }
}

    if(sum== n)
        printf("%d is a Perfect Number",n);
    else
        printf("%d is Not a Perfect Number",n);

return 0;
}