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

//append item into the List
void append(List *lst, int key)
{
	lst->arr[lst->no++] = key;
}

//show item of the List
void show_list(List lst)
{
	int i;
	for(i=0; i<lst.no; i++)
	{
		printf("%d ", lst.arr[i]);
	}
}

List compute_factor(int n)
{
	int d;
	List l;
	l.no = 0;
	for(d=1; d<=n; d++)
	{
		if(n%d == 0)
		{
			append(&l,d);
		}
	}
	return l;
}

int main()
{
	int n;
	List result;
	printf("Enter a Number : ");
	scanf("%d", &n);
	result = compute_factor(n);
	show_list(result);
    return 0;
}
