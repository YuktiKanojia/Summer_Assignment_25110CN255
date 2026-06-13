#include <stdio.h>
//Q49) Write a program to Input and display array.
int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // To input array elements
    printf("Enter the elements: \n");
    for(i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // To display array elements
    printf("Array elements are: \n");
    for(i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}