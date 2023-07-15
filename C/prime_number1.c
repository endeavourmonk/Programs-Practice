#include<stdio.h>
#define size 1000
void printer(int *,int );
int prime_computer(int a,int b, int *p );
void interchange(int *,int *);
int main()
{
    int n1,n2,d;
    int array[size];
    printf("enter Ist number");
    scanf("%d",&n1);
    printf("enter IInd number");
    scanf("%d",&n2);
    if (n1>n2)
    {
        interchange(&n1,&n2);
    }
    d=prime_computer(n1,n2,&array[0]);
    printf("\nPRIME NUMBERS ARE\n");
    printer(&array[0],d);
    return 0;   
}
/////////////// interchanging numbers  ////////////////
void interchange(int*x,int*y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
/////////////// computing prime between two ranges //////////////
int prime_computer(int a, int b, int *p )
{
    int d,i=0;
    V:while(a<=b)
    {
        d=2;
        while(d<a)

        {
            if(a%d==0)
            {
                a++;
                goto V;
            }
         d++;
        }
        *(p+i)=a;
        i++;
        a++;
    }
    return i;
}
////////////////////  pritning array ////////////////////////////
void printer(int *a,int j)
{
    int i;
    for(i=0;i<j;i++)
    {
        printf("%d \n",*(a+i));
    }
}