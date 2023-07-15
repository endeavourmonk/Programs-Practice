// compute factors of a number..................

#include <stdio.h>
#define SIZE 100

//for storing a set of data using OOPS.........
// access specifier (public:gives access , private: restrict access, protected)
class List
{
    public:
	int arr[SIZE];
	int no;

	List(){ no = 0; }   //Constructor

	//append item into the List
	void append(int key)
	{
		arr[no++] = key;
	}

	//show item of the List
	void show_list();
};

//member function of List.............
void List::show_list()
{
	int i;
	for(i=0; i<no; i++)
	{
		printf("%d ", arr[i]);
	}
}

List compute_factor(int n)
{
	int d;
	List l;		// calls the constructor for the 'l' Object.

	for(d=1; d<=n; d++)
	{
		if(n%d == 0)
		{
			l.append(d);
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
	result.show_list();
	return 0;
}
