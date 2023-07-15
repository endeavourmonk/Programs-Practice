// compute factors of a number..................
#include <stdio.h>
#define SIZE 100
//for storing a set of data as result.........
typedef struct List List;
struct List
{
	int arr[SIZE];
	int no;
};

List compute_factor(int n)
{
	int d;
	List l;
	l.no = 0;
	for(d=1; d<=n; d++)
	{
		if(n%d == 0)
		{
			  l.arr[l.no++] = d;
		}
	}
	return l;
}

int main()
{
	int n;
	int i;
	List result;
	printf("Enter a Number : ");
	scanf("%d", &n);

	result = compute_factor(n);
	for(i=0; i<result.no; i++)
	{
		printf("%d ", result.arr[i]);
	}
    return 0;
}
