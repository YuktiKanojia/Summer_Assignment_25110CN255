#include <stdio.h>
//Q55) Write a program to Second largest element. 
int main() {

    int n, i;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume first two elements
    if(arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Find second largest
    for(i = 2; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}