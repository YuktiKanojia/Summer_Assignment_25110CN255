#include <stdio.h>
//Q60) Write a program to Move zeroes to end.
int main() {
    int n, i, j = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Move non-zero elements forward
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    printf("Array after moving zeroes:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}