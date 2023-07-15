#include <stdio.h>

///////express number as product of primes

void prime_fac(int n)
{
	int d=0,f=0;
	for(d=2;n>1;)
	
	{
		if(n%d==0)
		{
			if(f!=0)
			{
				printf("X");
			}
			printf("%d",d);
			n=n/=d;
			f=1;
			
		}
		else
		d++;
		
	}
}

int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
prime_fac(num);
return 0;
}
