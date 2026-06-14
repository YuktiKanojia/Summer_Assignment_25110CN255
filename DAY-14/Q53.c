#include <stdio.h>
//Q53) Write a program to Linear search. 
int main() {
    int n, i, item;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &item);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == item) {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}