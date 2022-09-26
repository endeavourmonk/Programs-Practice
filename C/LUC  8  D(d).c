#include <stdio.h>
int check_leap(int y)
{
	if (y%100==0)
	{
		if(y%400==0)
		{
		return 1;
		}
	}
	else
	{
	                      if (y%4==0)
	                      {
	                      	return 1;
		}
	}
}


main ()
{
	int year,z;
	printf("input year");
	scanf("%d",&year);
	z=check_leap(year);
	z==1?printf("leap year"): printf("not leap year");
	return 0;
}
