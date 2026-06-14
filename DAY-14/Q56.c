#include <stdio.h>
//Q56) Write a program to Find duplicates in array. 
int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    // To find duplicates
    for(i = 0; i < n; i++) {

        for(j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}