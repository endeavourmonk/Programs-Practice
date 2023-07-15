#include<stdio.h>
#define size 1000

//creating structure ..............
struct List
{
    int arr[size];
    int no;
};

//appending......
void append(List *l ,int n)
{
    l->arr[l->no++] = n;
}

//showing list ............
void show_list(List sl)
{
   int i=0;
    for(;i<sl.no;i++)
    {
        printf("%d ",sl.arr[i]);
    }
}

//checking number is prime or not ...........
int check_prime(int num)
{
    int d;
    for(d=2;d<num;d++)
        {
            if(num%d==0)
            return 0;
        }
    return 1;
}

// computing prime series...........
List compute_prime_series(int sr,int er)
{
    int d,n;
    List l;
    l.no=0;
    for(n=sr ;n<=er ;n++)
    {
        int flag;
        flag = check_prime(n);
        if(flag==1)
        append(&l,n);
    }
    return l;
}

int main()
{
    List ps;
    int sr,er,d,n;
    printf("enter stating range : ");
    scanf("%d",&sr);
    printf("enter ending range : ");
    scanf("%d",&er);
    ps=compute_prime_series(sr,er);   
    show_list(ps);
    return 0;
}