#include<stdio.h>
int main()
{
    int n,l=1,c,value=65;
    printf("enter value of n : ");
    scanf("%d",&n);
    do
    {
        c=1;
        do
        {
            printf("%c ",value++);
            c++;
        } while (c<=l);
        printf("\n");
        l++;
    } while (l<=n);
    return 0;
}