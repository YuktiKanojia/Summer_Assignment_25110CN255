#include <stdio.h>
// Q75) Write a program to Transpose matrix.
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
    for(i=0; i<rows; ++i) {
        for(j=0; j<columns; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix is:\n");
    for(i = 0; i < columns; i++) {
        for(j = 0; j < rows; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }

    return 0;
}