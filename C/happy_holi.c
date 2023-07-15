#include<stdio.h>
int main(){
    int H,A,P,P1,Y,H1,O,L,I,n,spc;
    int h,a,p,p1,y,h1,o,l,i;
    char sym;
    printf("enter symbol\n");
    scanf("%c",&sym);
    printf("enter value_");
    scanf("%d",&n);
    for(H=1;H<=n;H++){
        for(h=1;h<=n/4;h++)
            printf("%c",sym);
        if(H==(n/2)|| H==((n/2)+1))
            for(a=0;a<n/2;a++)
                printf("%c",sym);
        else
            for(spc=0;spc<n/2;spc++)
                printf(" ");   
        for(P=1;P<=n/4;P++)
            printf("%c",sym);
        printf("\n");

    }
     for(A=0;A<n;A++){
         for(a=n-A;a>0;a--)
	printf(" ");
           printf("%c",sym);
           printf("\n");
        }    
    return 0;
}
