#include <stdio.h>
// Q97) Write a program to Merge two sorted arrays.
int main() {
    int n1, n2, i, j, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int a[n1];

    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int b[n2];

    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Array to store merged elements
    int c[n1 + n2];

    i = 0;
    j = 0;

    // Compare elements of both arrays and copy the smaller one
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // Copy remaining elements of first array, if any
    while (i < n1)
        c[k++] = a[i++];

    // Copy remaining elements of second array, if any
    while (j < n2)
        c[k++] = b[j++];

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}