#include<stdio.h>
int main()
{
    int n,l,c,k;
    printf("enter value of n");
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        for(c=1 ; c<=n-l ; c++)
            printf(" ");
        for(c=1;c<=l;c++)
            printf("%d",c);
        for(c=l-1 ; c>0 ; c--)
            printf("%d",c);
        printf("\n");
    }
    for(l=1;l<n;l++)
    {
        for(c=1;c<=l;c++)
        printf(" ");
        for(c=1;c<=n-l;c++)
        printf("%d",c);
        for(c=n-l-1;c>0;c--)
        printf("%d",c);
        printf("\n");
    }
 return 0;
}
