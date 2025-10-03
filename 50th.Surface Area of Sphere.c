#include <stdio.h>
int main() {
    float r, area;
    printf("Enter radius of sphere: ");
    scanf("%f", &r);
    area = 4 * 3.14159 * r * r;
    printf("Surface Area of Sphere = %.2f\n", area);
    return 0;
}