#include <stdio.h>
// Q74) Write a program to Subtract matrices.
int main() {
    int rows, columns, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &columns);

    int a[rows][columns], b[rows][columns];

    printf("Enter first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &b[i][j]);

    printf("Subtraction Matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }
    return 0;
}