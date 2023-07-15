#include<stdio.h>
#include "u_lib.h"
int main ()
{
	int x,status;
	printf("enter number");
	scanf("%d",&x);
	status=is_perfect_number(x);
	if(status==1)
	{
	printf("perfect number");
	}	
	else
	{
	printf("not a perfect number");
	}
	return 0;
}
