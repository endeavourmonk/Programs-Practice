#include<stdio.h>
int main()
{
    int n,n1,rev=0,rem;
    printf("enter number");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }
    if(n1==rev)
    printf("PALINDROME");
    else
    printf("NOT PALINDROME");
    return 0;
}