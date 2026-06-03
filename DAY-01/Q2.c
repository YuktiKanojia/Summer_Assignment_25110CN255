#include <stdio.h>
// Q2 Write a program to print the multipication table of a given number.
int main() {
    int num, i;

    printf("Enter the number for printing the multiplication table:");
    // fflush(stdout);
    scanf("%d", &num);

    for(i=1; i<=10; i++){
         printf("%d * %d =%d \n",num,i,num*i);
        }

    return 0;
    }