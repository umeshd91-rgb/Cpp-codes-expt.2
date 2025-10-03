#include <stdio.h>

int main() {
    int height, base, area;
    printf("Enter height:");
    scanf("%d", &height);
    printf("Enter base:");
    scanf("%d", &base);
    
   area = 1/2*height*base;
   printf("%d", area);
    
    return 0;
}