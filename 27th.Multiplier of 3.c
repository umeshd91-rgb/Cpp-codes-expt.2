#include <stdio.h>

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    
    if(num % 3 == 0)
printf("%d is multiplier of 3 " );

else
printf("%d is not multiplier of 3 ");
    return 0;
}