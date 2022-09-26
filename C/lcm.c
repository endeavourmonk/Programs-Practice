#include<stdio.h>
int least_common_factor(int *a,int *n1,int *n2);
int main()
{
    int Lcm=1,x,y,nof,i;
    int array[100];
    printf("\nenter Ist number\n");
    scanf("%d",&x);
    printf("\nenter IInd number\n");
    scanf("%d",&y);
    nof=least_common_factor(array,&x,&y);
    for(i=0;i<nof;i++)
    {
        Lcm=Lcm*array[i];
    }
    Lcm=Lcm*x*y;
    printf("\nLCM=%d",Lcm);
    for(i=0;i<nof;i++)
    {
        printf("%d",array[i]);
        printf("X");
    }
    printf("%d",x);
    printf("X");
    printf("%d",y);
    printf("=%d",Lcm);
    return 0;
}
int least_common_factor(int *a,int *n1,int *n2)
{
    int d=2,i=0;
    while(d<=*n1 && d<=*n2)
    {
        if (*n1%d==0 && *n2%d==0)
        {
            *n1/=d;
            *n2/=d;
            *(a+i)=d;
            i++;
        }
        d++;
    }
}
