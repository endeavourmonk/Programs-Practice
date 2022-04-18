// Calculate sum of individual digits of a given number

#include<stdio.h>
void main(){
    int num, sum = 0, n;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(n = num; n != 0; n /= 10)
        sum += (n % 10);
    printf("Sum of individual digits of %d is %d", num,sum);
}