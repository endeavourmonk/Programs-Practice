// Read radius value from the keyboard and calculate the area of circle and print the result in floating
// and exponential notation
#include<stdio.h>
int main(){
    float r, A;
    printf("Enter Radius of circle :");
    scanf("%f", &r);
    A = 3.14 * r * r;
    printf("\nArea of circle = %.2f",A);
    printf("\nArea of circle = %e",A);
    return 0;
}