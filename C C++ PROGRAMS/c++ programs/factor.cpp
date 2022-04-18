// compute factors of a number..................

#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	int d;
	printf("Enter a Number : ");
	scanf("%d", &n);

	for(d=1; d<=n; d++)
	{
		if(n%d == 0)
		{
			  printf("%d ", d);
		}
	}
	return 0;
}
