#include <stdio.h>
//Q10)Write a program to Print prime numbers in a range. 
int main() {
    int start, end, i, j, prime;

    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", i);
    }

    return 0;
}