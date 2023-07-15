#include <stdio.h>
int factorial(int n)
{
	long f=1;
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	return f;
}

main ()
{
	int num;
	long fact;
	printf("enter a number");
	scanf("%d",&num);
	fact=factorial(num);
	printf("factorial of %d is %lld",num,fact);
	return 0;
}
