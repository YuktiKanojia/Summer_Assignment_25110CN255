#include <stdio.h>
// Q78) Write a program to Check symmetric matrix.
int main() {
    int size, i, j, symmetric = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &size);

    int a[size][size];

    printf("Enter matrix elements:\n");
    for(i = 0; i < size; i++)
        for(j = 0; j < size; j++)
            scanf("%d", &a[i][j]);

    printf("\nMatrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("\nMatrix is Symmetric.\n");
    else
        printf("\nMatrix is Not Symmetric.\n");

    return 0;
}