#include <stdio.h>
//Q21) Write a program to Convert decimal to binary.
int main() {
    int deci, binary[32], i = 0;
    
    printf("Enter the decimal number: ");
    scanf("%d", &deci);

    if (deci== 0) {
        printf("Binary = 0");
        return 0;
    }

    while (deci> 0) {
        binary[i] = deci%2;
        deci = deci/ 2;
        i++;
     }

    printf("Binary = ");
    for (int j = i - 1; j>= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}