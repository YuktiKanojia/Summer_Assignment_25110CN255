#include <stdio.h>
//Q51) Write a program to Find largest and smallest element. 
int main() {
    int n, i;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Check remaining elements
    for(i = 1; i < n; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}