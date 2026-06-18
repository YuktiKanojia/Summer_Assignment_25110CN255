#include <stdio.h>
//Q72) Write a program to Sort array in descending order.
int main() {
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Descending Sort
    for(i=0; i < n-1; i++) {
        for(j = i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Array in Descending Order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}