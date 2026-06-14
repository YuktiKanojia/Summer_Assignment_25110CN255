#include <stdio.h>
//Q54) Write a program to Frequency of an element. 
int main() {

    int n, i, item;
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &item);

    // Count frequency
    for(i = 0; i < n; i++) {

        if(arr[i] == item) {
            count++;
        }
    }
    printf("Frequency of %d = %d", item, count);

    return 0;
}