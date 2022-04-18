#include<stdio.h>
main()
{
    int n,l,c,k;
    printf("enter the value of n");
    scanf("%d",&n); 
    for(l=1;l<=n;l++)
    {
        for(c=1;c<=l;c++)
        printf("%d",c);
        for(c=1;c<=n-l;c++)
        printf(" ");
        for(c=1;c<=n-l-1;c++)
        printf(" ");
        for(c=l;c>0;c--)
        printf("%d",c);
        printf("\n");
    }
    return 0;
}