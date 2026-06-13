#include <stdio.h>
//Q52) Write a program to Count even and odd elements. 
int main() {
    int n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Count even and odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}