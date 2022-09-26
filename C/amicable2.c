#include<stdio.h>

typedef struct
{
	int a[200];
	int no;
}List;


//////       function declarations      ///////
List all_amicable_pairs(int sr,int er);
int is_amicable(int a,int b);
List find_factor(int n);
int summer(List s);


main ()
{
	int n1,n2,i;
	List a;
	printf("enter first number");
	scanf("%d",&n1);
	printf("enter second number");
	scanf("%d",&n2);
	a = all_amicable_pairs(n1,n2);
	printf("number of amicable pairs=%d\n\n\n",a.no);
	printf("amicable pairs are\n\n");
	for(i=0;i<2*a.no;i=i+2)
	{
		printf("(%d,%d)\n",a.a[i],a.a[i+1]);
	}
	return 0;
}

List all_amicable_pairs(int sr,int er)
{
	int i,j,flag;
           	List b;
	for(i=sr,b.no=0 ; i<er ; i++ )
	{
		for(j=i+1 ; j<=er ; j++ )
		{
			flag = is_amicable(i,j);
			if(flag==1)
			{
				b.a[b.no]=i;
				b.a[b.no+1]=j;
				b.no+=2;
			}
		}
	}
	b.no = b.no/2;
	return b;
}

int is_amicable(int a,int b)
{
	List af,bf;
	int sum_af,sum_bf;
	af = find_factor(a);
	sum_af = summer(af);
	bf = find_factor(b);
	sum_bf = summer(bf);
	return (sum_af==b && sum_bf==a) ? 1:0;
}

List find_factor(int n)
{
	List f;
	int q;
	f.no=0;
	for(q=1 ; q<=n ; q++)
	{
		if(n%q==0)
		{
			f.a[f.no]=q;
			f.no++;
		}
	}
	return f;
}

int summer(List s)
{
	int p=0,i;
	for(i=0 ; i<s.no-1; i++)
	{
		p+=s.a[i];
	}
	return p;
}

