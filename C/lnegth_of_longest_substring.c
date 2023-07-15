#include<stdio.h>
#define arr_size 50
int main(){
    char str[arr_size];
    int i,j,a=0,s=0,len,k,sum=0,sum1=0;
    printf("Enter number of digits : ");
    scanf("%d",&len);
    printf("Enter string : ");
    scanf("%s",str);
    printf("String is : %s",str);
    k=len/2;
    if(len%2!=0){
        s=(len/2);
        a=s;
    }
    else{
        s=len/2;
        a=(len/2)-1;
    }
    while(k>0){
        for(i=s-1,j=a+1;i>=0;i--,j++){
            sum+=str[i];
            sum1+=str[j];
        }
        if(sum==sum1){
            printf("\nLength of longest substring is %d",k*2);
            return 0;
        }
        a++;
        s--;
        k--;
    }
    printf("no substring found");
    return 0;
}
