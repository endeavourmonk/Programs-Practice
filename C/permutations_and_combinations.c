#include<stdio.h>
#define size 10
int permutations(int,int);
int combinations(int,int);
int factorial(int);

int main(){
    int n,r;
    printf("enter value of n : ");
    scanf("%d",&n);
    printf("enter value of r : ");
    scanf("%d",&r);
    int per =permutations(n,r);
    printf("permutation of %d and %d is %d ",n,r,per);
    int com=combinations(n,r);
    printf("\ncombinations of %d and %d is %d ",n,r,com);
    return 0;
}

int permutations(int n,int r){
    int a=factorial(n);
    int b=factorial(n-r);
    return a/b;
}

int combinations(int n,int r){
    int per=permutations(n,r);
    int f=factorial(r);
    return per/f;
}

int factorial(int n){
    int i=n,fac=1;
    while (i>0){
        fac*=i;
        i--;
    }
    return fac;
}