#include <stdio.h>
//Q20)Write a program to Find largest prime factor.
int main() {
    int n ,largest=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=2; i<=n; i++){
       if(n%i ==0) {
            int prime=1;

            for(int j=2; j<i; j++) {
                if(i%j == 0) {
                    prime=0;
                    break;
                 }
         }
           if(prime)
            largest=i;
        }
    }
    printf("Largest Prime Factor = %d",largest);
    return 0;
 }

