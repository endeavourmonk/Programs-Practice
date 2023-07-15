#include<stdio.h>
void compute_prime(int sr,int er)
{
    int d,n;
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
}
int main()
{
    int sr,er,d,n;
    printf("enter stating range : ");
    scanf("%d",&sr);
    printf("enter ending range : ");
    scanf("%d",&er);
    compute_prime(sr,er);
    return 0;
}