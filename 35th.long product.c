#include <stdio.h>

int main()
{
    int n, i;
    long product = 1;
    
    printf("Enter n: ");
scanf("%d", &n);

for(i = 1; i <= n; i++);
product *= i;

printf("Product = %1d: ", product);
    return 0;
}