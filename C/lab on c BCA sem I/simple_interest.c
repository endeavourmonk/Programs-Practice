// Calculate Simple interest.
#include<stdio.h>
int main(){
    float P, R, T, SI;
    printf("Enter P(principal), R(Rate of Interest) and T(Time in Year) : ");
    scanf("%f%f%f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("SIMPLE INTEREST = Rs.%.2f", SI);
    return 0;
}