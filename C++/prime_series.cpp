#include<stdio.h>
int main()
{
    int sr,er,d,n;
    printf("enter stating range : ");
    scanf("%d",&sr);
    printf("enter ending range : ");
    scanf("%d",&er);
    for(n=sr ;n<=er ;)
    {
        for(d=2;d<n ;d++)
        {
            if(n%d==0)
                goto DOWN;
        }
        printf("%d ",n);
        DOWN: n++;
    }
    return 0;
}