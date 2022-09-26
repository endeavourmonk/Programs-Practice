#include<stdio.h>
#define size 1000
int main(){
    int n1,n2,i,j,z;
    int facn1[size],facn2[size];
    printf("enter first number : ");
    scanf("%d",&n1);
    printf("enter second number : ");
    scanf("%d",&n2);
    for(j=0,i=2;n1!=1;i++){ 
         while (1){
            if(n1%i==0){
                n1/=i;
                facn1[j++]=i;
                continue;
            }
            else break;
        }
    }
    facn1[j]=n1;
     printf("factors of %d are",n1); 
    for (z=0;z<=j;z++)
    printf("%d ",facn1[z]);

    for(j=0,i=2;n2!=1;i++){ 
         while (1){
            if(n2%i==0){
                n2/=i;
                facn2[j++]=i;
                continue;
            }
            else break;
        }
    }
    facn2[j]=n2;
     printf("\n\nfactors of %d are",n2);
    for (z=0;z<=j;z++)
    printf("%d ",facn2[z]);
    return 0;
}
