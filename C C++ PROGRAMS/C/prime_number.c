#include<stdio.h>
#include<stdlib.h>
void interchange(int *,int *);
int main()
{
    int n1,n2,d;
    printf("enter Ist number");
    scanf("%d",&n1);
    printf("enter IInd number");
    scanf("%d",&n2);
    if (n1>n2)
    {
        interchange(&n1,&n2);
    }
    printf("\nPRIME NUMBERS ARE\n");
    V:while(n1<=n2)
    {
        d=2;
        while(d<n1)
        {
            if(n1%d==0)
            {
                n1++;
                goto V;
            }
            d++;
        }
        printf("%d\n",n1);
        n1++;
    }
  exit(0);   
}
void interchange(int*x,int*y)
{
    int z=*x;
    *x=*y;
    *y=z;
}