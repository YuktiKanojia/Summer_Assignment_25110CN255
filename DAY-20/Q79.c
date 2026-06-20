#include <stdio.h>
// Q79) Write a program to Find row-wise sum.
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

    printf("\nRow-wise Sum is:\n");
    for(i = 0; i < rows; i++) {
        int sum = 0;
        for(j = 0; j < columns; j++)
            sum += a[i][j];

        printf("Row %d = %d\n", i + 1, sum);
    }
    return 0;
}