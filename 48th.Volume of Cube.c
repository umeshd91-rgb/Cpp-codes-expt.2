#include <stdio.h>
int main() {
    int side, volume;
    printf("Enter side of cube: ");
    scanf("%d", &side);
    volume = side * side * side;
    printf("Volume of Cube = %d", volume);
    return 0;
}