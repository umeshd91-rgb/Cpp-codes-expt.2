#include <stdio.h>

int main()
{
    int num, cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    cube = num * num * num;
    printf("Cube of the number is: %d\n ", num, cube);
    return 0;
}