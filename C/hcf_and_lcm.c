#include<stdio.h>
int hcf_finder(int,int);     //prototype declaration
int lcm_finder(int,int);
int least_common_factor(int,int);

int main(){
    int num1,num2,hcf,lcm;
    printf("ENTER NUMBERS : ");
    scanf("%d%d",&num1,&num2);
    hcf=hcf_finder(num1,num2);
    printf("HCF IS %d",hcf);
    lcm=lcm_finder(num1,num2);
    printf("\nLCM is %d",lcm);
    return 0;

}

int hcf_finder(int n1,int n2){       //finding hcf
    int rem=n2%n1;
    if(rem==0)
        return n1;
    else 
        hcf_finder(rem,n1);          //recursion
}

int lcm_finder(int n1,int n2){        //LCm finding
    int lcm=1,lcf=0;
    lcf=least_common_factor(n1,n2);
    lcm*=lcf;
    if(lcf==1)
        return lcm*(n1/lcf)*(n2/lcf);
    lcm*=lcm_finder(n1/lcf,n2/lcf);           //recursion
}

int least_common_factor(int num1,int num2){    //finding least common factor
    int d;
    for(d=2;d<=num1&&d<=num2;d++){
        if(num1%d==0 && num2%d==0)
            return d;
    }
    return 1;
}
