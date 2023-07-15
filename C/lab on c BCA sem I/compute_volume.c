// Compute the volume of sphere, cone and cylinder.
#include<stdio.h>
int main(){
    float v;
    int r, h;
    printf("Enter radius of sphere in cm :\n");
    scanf("%d", &r);
    v = (float)4/3 * 3.14 * r * r* r;
    printf("Volume of sphere = %.2f cm^3\n\n",v);
    printf("Enter radius and height of cylinder in cm :\n");
    scanf("%d%d", &r, &h);
    v = (float)22/7 * r*r*h;
    printf("Volume of cylinder = %.2f cm^3\n\n",v);
    printf("Enter radius and height of cone in cm :\n");
    scanf("%d%d", &r, &h);
    v = (float)v/3;
    printf("Volume of cone = %.2f cm^3\n\n",v);
    return 0;
}