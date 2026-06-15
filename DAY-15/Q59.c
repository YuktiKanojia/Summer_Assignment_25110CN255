#include <stdio.h>
//Q59 Write a program to Rotate array right. 
int main() {
    int n, i, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Store last element
    last = arr[n - 1];

    // Shift elements right
    for(i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // put last element at beginning
    arr[0] = last;

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}