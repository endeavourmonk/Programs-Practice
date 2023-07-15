// object oriented approach for finding prime series between two range .....
#include<stdio.h>
#define size 1000

//for storing a set of data using OOPS.........
// access specifier (public:gives access , private: restrict access, protected)
class List
{
    public:
    int arr[size];
    int no;

    List(){no=0;}       //constructor

    //appending......
    void append(int n);
    // showing list.....
    void show_list();
};

//member function of the list......
    void List :: append(int n)
    {
        arr[no++]=n;
    }

//member function of the list......
void List:: show_list()
    {
        int i=0;
        for(;i<no;i++)
        {
            printf("%d ",arr[i]);
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
    List l;        //call the constructor for 'l' object .....
     for(n=sr ;n<=er ;n++)
    {
        int flag;
        flag = check_prime(n);
        if(flag==1)
        l.append(n);
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
    ps.show_list();
    return 0;
}