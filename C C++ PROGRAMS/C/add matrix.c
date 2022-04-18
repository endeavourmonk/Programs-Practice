#include<stdio.h>
#define size 3
#define rise

int main()
{
	int a[size][rise],b[size][rise],c[size][rise];
	int i,j;
	printf("enter elements of matrix 1\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<rise;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of matrix 2\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<rise;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<size;i++)
	{
		for(j=0;j<rise;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of matrices is\n\n");

	for(i=0;i<size;i++)
	{
		for(j=0;j<rise;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
