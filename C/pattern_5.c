#include<stdio.h>
main()
{
    char a[]={'C','O','B','O','L'};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        printf("%c",a[j]);
        printf("\n");
    }
    return 0;
}