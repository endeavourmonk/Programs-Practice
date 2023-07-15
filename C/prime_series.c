#include<stdio.h>
typedef struct 
{
    int ar[1000000];
    int no;
}data;
void show_list(data l);
data prime_series(int sr , int er);
int is_prime(int n);
int main()
{
    int sr,er;
    data ps;
    printf("enter starting range");
    scanf("%d",&sr);
    printf("enter ending range");
    scanf("%d",&er);
    ps=prime_series(sr,er);
    show_list(ps);
    return 0;
}
data prime_series(int sr , int er)
{
    int n,flag;
    data l;
    l.no=0;
    for(n=sr;n<=er;n++)
    {
        flag=is_prime(n);
        if(flag==1)
        l.ar[l.no++]=n;
    }
    return l;

}
int is_prime(int n)
{
    int d;
    for(d=0;d<n;d++)
    {
        if(n%d==0)
        return 0;
    }
    return 1;
}
void show_list(data l)
{
    int i;
    for(i=0;i<l.no;i++)
    {
        printf("%d",l.ar[i]);
    }
}
