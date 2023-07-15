// Convert Termperature(Fahrenheit To Celcius and vice versa);
#include<stdio.h>
int main(){
    float T, ConvTem;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&T);
    ConvTem = (T-32) * (float)5/9;
    printf("\n%.2fF = %.2fC", T,ConvTem);

    printf("\n\nEnter temperature in Celcius : ");
    scanf("%f",&T);
    ConvTem = (T * 1.8) + 32;
    printf("\n%.2fC = %.2fF", T,ConvTem);
    return 0;
}