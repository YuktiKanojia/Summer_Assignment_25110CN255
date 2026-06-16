#include <stdio.h>
//Q64 Write a program to Remove duplicates from array. 
int main() {
    int n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Remove duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
               // to shift elements left
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}