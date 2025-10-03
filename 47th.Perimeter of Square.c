#include <stdio.h>
int main() {
    int side, peri;
    printf("Enter side of square: ");
    scanf("%d", &side);
    peri = 4 * side;
    printf("Perimeter of Square = %d\n", peri);
    return 0;
}