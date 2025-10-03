#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a numbers: ");
    scanf("%d", &a);
     printf("Enter a numbers: ");
    scanf("%d", &b);
    if(a < b)
printf("%d is smaller", a);

else
printf("%d is smaller", b);
    return 0;
}