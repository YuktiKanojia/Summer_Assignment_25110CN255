#include <stdio.h>
//Q68) Write a program to Find common elements. 
int main() {
    int arr1[50], arr2[50];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Common Elements:\n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {

            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}