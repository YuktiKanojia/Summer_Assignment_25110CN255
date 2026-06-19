#include <stdio.h>
// Q76) Write a program to Find diagonal sum.
int main() {
    int size, i, j, sum = 0;

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

    for(i = 0; i < size; i++)
        sum += a[i][i];

    printf("\nDiagonal Sum = %d\n", sum);

    return 0;
}