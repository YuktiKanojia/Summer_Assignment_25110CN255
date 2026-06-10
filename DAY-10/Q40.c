#include <stdio.h>
// Q40) Write a program to Print character pyramid. Microsoft, Adobe, Paytm 
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA
int main() {
    int i, j, k, rows = 5;
    char ch;

    for (i=1; i<=rows; i++) {

        for (j=1; j<= rows - i; j++) {
            printf(" ");
        }

      ch='A';
        for (j=1; j<=i; j++) {
            printf("%c", ch++);
        }

         ch -= 2;
        for (k=1; k<i; k++) {
            printf("%c", ch--);
        }

        printf("\n");
    }
    return 0;
    
}