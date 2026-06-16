#include <stdio.h>
//Q63) Write a program to Find pair with given sum. 
int main() {

    int n, i, j, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs are:\n");

    // Find pairs
    for(i = 0; i < n; i++) {

        for(j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == sum) {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
            }
        }
    }
    return 0;
}