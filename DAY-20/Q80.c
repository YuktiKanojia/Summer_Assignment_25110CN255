#include <stdio.h>
// Q80) Write a program to Find column-wise sum.
int main() {
    int rows, columns, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &columns);

    int a[rows][columns];

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);

    printf("\nMatrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("\nColumn-wise Sum is:\n");
    for(j = 0; j < columns; j++) {
        int sum = 0;
        for(i = 0; i < rows; i++)
            sum += a[i][j];

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}