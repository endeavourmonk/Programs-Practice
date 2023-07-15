#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter value : ");
    scanf("%d",&n);
     for( i=1;i<2*n;i++){
            for(j=0;j<2*n;j++){
                if(j<n)
                    printf("(");
                else
                    printf(")");
            }
            printf("\n");
        }
}