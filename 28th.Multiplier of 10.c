#include <stdio.h>

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    
    if(num % 10 == 0)
printf("%d is multiplier of 10 " );

else
printf("%d is not multiplier of 10 ");
    return 0;
}