#include <stdio.h>
//Q58) Write a program to Rotate array left.
int main() {
    int n, i, first;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Store first element
    first = arr[0];

    // Shift elements left
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // to put first element at end
    arr[n-1] = first;

    printf("Array after left rotation:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}