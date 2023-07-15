#include <stdio.h>
#include <math.h>
int power(int a,int b)
{
	int r;
	r=pow(a,b);
	return r;
}
main ()
{
	int num1,num2,r;
	printf("enter base number");
	scanf("%d",&num1);
	printf("enter index");
	scanf("%d",&num2);
	r=power(num1,num2);
	printf("result=%d",r);
	return 0;
}
