#include <stdio.h>
int main() {
    int a, b, mul;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    mul = a * b;
    printf("Product = %d\n", mul);
    return 0;
}