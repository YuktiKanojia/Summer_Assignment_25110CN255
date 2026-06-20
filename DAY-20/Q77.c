#include <stdio.h>
// Q77) Write a program to Multiply matrices.
int main() {
    int rows, columns, i, j, k;

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

    printf("\nMatrix Multiplication:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            int sum = 0;
            for(k = 0; k < columns; k++)
                sum += a[i][k] * b[k][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}