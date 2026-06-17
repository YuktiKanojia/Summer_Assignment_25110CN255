#include <stdio.h>
//Q65) Write a program to Merge arrays. 
int main() {
    int n1, n2, i;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int arr3[n1+n2];
    
    // Copy first array
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy second array
    for(i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged Array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}