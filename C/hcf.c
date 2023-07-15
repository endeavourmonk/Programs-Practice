#include<stdio.h>
int find_hcf(int n1,int n2);
main()
{
	int n1,n2,HCF;
	printf("enter first number  ");
	scanf("%d",&n1);
	printf("enter second number  ");
	scanf("%d",&n2);
	HCF=find_hcf(n1,n2);
	printf("\n\nHCF of %d and %d is %d ",n1,n2,HCF);
	return 0;
}

int find_hcf(int n1,int n2)
{
	int r;
	r=n2%n1;
	if(r!=0)
	{
		n2=n1;
		n1=r;
		find_hcf(n1,n2);
	}
	else
	return n1;
}
