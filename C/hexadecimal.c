#include<stdio.h>
#define size 10000
int main()
{
    int n,q,i=0,j,r;
    int hexd[size];
    printf("enter number : ");
    scanf("%d",&n);
    printf("HEXADECIMAL EWUIVALENT OF %d is :: ",n);
    do{
        r=n%16;
        hexd[i++]=r;
        n/=16;
        q=n;
    }while(q>15);
    hexd[i]=n;
    for(j=i;j>=0;j--){
        switch (hexd[j])
        {
        case 10: printf("A");
            break;
        case 11: printf("B");
            break;
        case 12: printf("C");
            break;
        case 13: printf("D");
            break;
        case 14 : printf("E");
            break;
        case 15: printf("F");
            break;
        default: printf("%d",hexd[j]);
            break;
        }
    }
    return 0;
}
