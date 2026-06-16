#include <stdio.h>
//Q61) Write a program to Find missing number in array. 
int main() {
    int n, i;
    int sum = 0, total, missing;

    printf("Enter number of elements (excluding missing number): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Sum of numbers from 1 to n+1
    total = (n + 1) * (n + 2) / 2;
    missing = total - sum;
    printf("Missing number = %d", missing);

    return 0;
}