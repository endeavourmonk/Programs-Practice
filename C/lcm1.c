# include<stdio.h>
#define size 100
int lcf(int ,int );
int lcm(int ,int );

int main(){
    int x,y,L;
    printf("enter first number ...");
    scanf("%d",&x);
    printf("enter second number...");
    scanf("%d",&y);
    L=lcm(x,y);
    printf("\nLCM OF %d AND %d IS %d",x,y,L);
    return 0;
}
///////////////// lowest common multiple  //////////////
int lcm(int n1,int n2){
    int l=1,d;
    while(1){
        d=lcf(n1,n2);
        if(d==1){
            l=l*n1*n2;
            return l;
        }
         n1/=d;
         n2/=d;
         l*=d;    
    }
}
/////////////////// least common factor ///////////////
int lcf(int x,int y){
    int f;
    for(f=2 ; f<=x && f<=y ; f++){
        if(x%f==0 && y%f==0)
            return f;
       }
    return 1;
}
