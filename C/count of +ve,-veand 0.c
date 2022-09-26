#include<stdio.h>
#define SIZE 200


//// inputing elements in array////

int entry(int *a)
{ 
     	int p=1,i;
	for(i=0;i<p;i++)
              { 
	              printf("enter number");
		scanf("%d",&(a+i));
		printf("do you want to continue (1(yes)/0(no)).....");
		scanf("%d",&p);
		if(p==1)
		{
			p++;
		}
	}
	//return p;
}

////outputing elements of array////

/*void print(*a)
{
	for (int x=0 ; x<SIZE)
}*/



int main ()
{
	int a[SIZE];
	entry(a);
//	print(a);  

return 0;
}
