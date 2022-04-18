// Check equivalence of two numbers using conditional operator.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    (a == b) ? printf("%d is equal to %d.", a,b) : printf("%d is not equal to %d.", a,b);
    return 0;
}