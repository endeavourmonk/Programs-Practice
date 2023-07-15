#include<stdio.h>
#define size 100
int check_strong_or_not(int n1,int n2,int *arr);
int seprate_digits(int n,int *arr);
void calculate_factorial(int n,int *fac);

int main(){
    int lr,ur,i,ind;
    int strng_no[size];
    printf("enter lower range : \n");
    scanf("%d",&lr);
    printf("enter upper range : \n");
    scanf("%d",&ur);
    ind=check_strong_or_not(lr,ur,strng_no);
    printf("STRONG NUMBER BETWEEN %d AND %d :-\n",lr,ur);
    for(i=0;i<ind;i++)
        printf("%d ",strng_no[i]);
    return 0;
}

int check_strong_or_not(int n1,int n2,int *arr){
    int n,n_of_dig,fac,sum=0,i,j=0;
    int digits[size];
    for(n=n1;n<=n2;n++){
        n_of_dig=seprate_digits(n,digits);
            for(i=0,sum=0;i<n_of_dig;i++){
                calculate_factorial(digits[i],&fac);
                sum+=fac;
        }
        if(sum==n )
            *(arr+j++)=n;
    }
    return j;
}

int seprate_digits(int n,int *arr){      //Separating digits of number 
    int i=0;
    for(i=0;n!=0;i++){
        *(arr+i)=n%10;
        n/=10;
    }
    return i;
}

void calculate_factorial(int n,int *fac){   //computing factorial
    int a,fact=1;
    for(a=n;a>0;a--)
        fact*=a;
    *fac=fact;
}