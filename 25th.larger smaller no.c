#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a numbers: ");
    scanf("%d", &a);
     printf("Enter a numbers: ");
    scanf("%d", &b);
    if(a > b)
printf("%d is larger", a);

else
printf("%d is larger", b);
    return 0;
}