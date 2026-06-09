#include <stdio.h>
// Q35) Write a program to Print repeated character
// pattern.
// A
// BB
// CCC
// DDDD
// EEEEE
int main() {
    int i, j;

    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%c", 'A' + i-1);
        }
        printf("\n");
    }
    return 0;
} 