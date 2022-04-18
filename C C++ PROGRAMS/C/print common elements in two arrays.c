#include<stdio.h>
#include<conio.h>


void input (int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enetr the elements of array");
		scanf("%d",(a+i));
	 }
}

void print(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array");

		printf("%d\n",*(a+i));
	 }
}

int  common(int *a,int *b,int n,int *c)
{
	int i,j,k=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}
	return k;
}

int main()
{
	int a[20],b[20],c[20];
	int i,n,z;
	clrscr();
	printf("enter the limit ofloop ");
	scanf("%d",&n);
	printf("\n inputing of first array data\n\n");
	input(&a[0],n);
	printf("\ninputing of second array data \n\n");
	input(&b[0],n);
	printf("\ndata of first array \n\n");
	print(&a[0],n);

	printf("\ndata of second array\n\n\n");
	print(&b[0],n);

	z=common(&a[0],&b[0],n,&c[0]);
	printf("\ncommon elements \n");
	print(&c[0],z);
	getch();

	return 0;
}
