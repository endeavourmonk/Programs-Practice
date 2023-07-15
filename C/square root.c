#include <stdio.h>
main()
{
	int n,s;
	printf("enter number");
	scanf("%d",&n);
	for(s=1; s<=n; s++)
	{
		if(s*s==n)
	{
	printf("square root of is %d",s);
	}
	return 0;
	} 
	printf("%d is not a perfect square",n);
	return 0;
}
