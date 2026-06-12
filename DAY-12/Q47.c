#include <stdio.h>
//Q47 Write a program to Write function for fibonacci.
void fibonacci(int n) {
    int a=0, b=1, c, i;
    printf("Fibonacci Series: \n");

    for(i=1; i<=n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    fibonacci(n);

    return 0;
}