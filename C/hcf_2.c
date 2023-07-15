#include<stdio.h>
#define size 1000
int compute_hcf(int,int);
int least_common_factor(int,int,int *);
int main(){
    int n1,n2,hcf;
    printf("enter numbers : ");
    scanf("%d  %d",&n1,&n2);
    hcf=compute_hcf(n1,n2);
    printf("HCF of %d and %d is %d",n1,n2,hcf);
    return 0;
}
int compute_hcf(int x,int y){
    int fac[size],count,i,hcf=1;
    count=least_common_factor(x,y,fac) ;
    for(i=0;i<count;i++)
    hcf*=fac[i];
    return hcf;
}

int least_common_factor(int a,int b,int *lcf){
    int i=2,count=0;
        while(i<a/2 && i<b/2){
            while(1){
                if(a%i==0&&b%i==0){
                    *(lcf+count++)=i;   
                    a/=i;
                    b/=i;
            }
            else break;
        }
          i++;
    }
  return count;
}
