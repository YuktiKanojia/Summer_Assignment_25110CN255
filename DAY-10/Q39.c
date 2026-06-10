#include <stdio.h>
// Q39) Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321 
int main() {
    int i, j, k, rows = 5;

    for (i=1; i<=rows; i++) {
        for (j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for (j=1; j<=i; j++) {
            printf("%d", j);
        }

        for (k=i-1; k>=1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
} 