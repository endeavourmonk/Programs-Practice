#include<stdio.h>
//checking number is prime or not ...........
int check_prime(int num)
{
    int d;
    for(d=2;d<num;d++)
        {
            if(num%d==0)
            return 0;
        }
    return 1;
}

// computing prime series...........
void compute_prime_series(int sr,int er)
{
    int d,n;
    for(n=sr ;n<=er ;n++)
    {
        int flag;
        flag = check_prime(n);
        if(flag==1)
        printf("%d ",n);
    }
}

int main()
{
    int sr,er,d,n;
    printf("enter stating range : ");
    scanf("%d",&sr);
    printf("enter ending range : ");
    scanf("%d",&er);
    compute_prime_series(sr,er);   
    return 0;
}