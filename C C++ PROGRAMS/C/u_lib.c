#include<stdio.h>
#define SIZE 10

int compute_factor(int n,int a[])a
{
	int d,i;
	for(d=1,i=0 ; d<=n ; d++)
	{
		if(n%d==0)
		{
			a[i]=d;
			i++;
		}
	}
	return i;
}

int sum_numbers(int a[],int no)
{
	int s,d;
	for(s=0,d=0;d<no;d++)
	{
		s+=a[d];
	}
	return s;
}

int is_perfect_number(int n)
{
	int a[SIZE];
	int nof,sum;
	nof=compute_factor(n,a);
	sum=sum_numbers(a,nof);
	sum-=n;
	return (sum==n) ? 1:0;
}
