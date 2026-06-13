#include <stdio.h>
//Q50 Write a program to Find sum and average of array. 
int main() {
    int arr[100], n, i;
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // To find sum
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // To find average
    avg = sum / (float)n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}