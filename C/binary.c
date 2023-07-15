#include<stdio.h>
#define size 32
int main(){
    int n,i=0,j=0;
    int bin[size];
    printf("enter number : ");
    scanf("%d",&n);
    for(i=0; n>1; n/=2,i++)
        bin[i] = n%2;    
    bin[i]=n;
    printf("BINARY EQUIVALENT :: ");
    for(j=i;j>=0;j--)
        printf("%d",bin[j]);
    return 0;
}