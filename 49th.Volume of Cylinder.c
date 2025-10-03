#include <stdio.h>
int main() {
    float r, h, volume;
    printf("Enter radius and height: ");
    scanf("%f %f", &r, &h);
    volume = 3.14159 * r * r * h;
    printf("Volume of Cylinder = %.2f\n", volume);
    return 0;
}