// Online C compiler to run C program online
#include <stdio.h>

int main() {
int mass,radius,mintia;
  printf("enter a mass ");
  scanf("%d",&mass);
  printf("enter radius :");
  scanf("%d",&radius);
  mintia = mass*radius;
  printf("moment of inertia of ring : %d",mintia);
    return 0;
}