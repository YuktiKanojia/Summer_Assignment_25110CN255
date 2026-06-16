#include <stdio.h>
//Q62) Write a program to Find maximum frequency element.
int main() {
    int n, i, j;
    int count, maxCount = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find maximum frequency
    for(i = 0; i < n; i++) {
        count = 1;
        
        for(j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d", maxCount);

    return 0;
    
}