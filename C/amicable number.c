 #include<stdio.h>

///////////////////////    function declaration      //////////////////

int is_amicable(int a,int b);
int all_amicable_pairs(int sr,int er,int *a);
int find_factor(int n,int *f);
int summer(int *f,int m);

int main()
{
	int  i,n1, n2, no_of_pairs;
	int a[30];
	printf("enter Ist number");
	scanf("%d",&n1);
	printf("enter IInd number");
	scanf("%d",&n2);
	no_of_pairs = all_amicable_pairs(n1,n2,a);
	printf("No of Amicable Pairs = %d\n\n ", no_of_pairs);
	printf("amicable pairs are as follows:\n\n");
	for(i=0; i<2*no_of_pairs;i+=2)
	{
		printf("(%d,%d)",a[i],a[i++]);
	}
	return 0;
}

int is_amicable(int a,int b)
{
	int af[50], no_af;
	int bf[50], no_bf;
	int sum_af, sum_bf;
	no_af = find_factor(a, af);
	sum_af = summer(af, no_af);
	no_bf = find_factor(b, bf);
	sum_bf = summer(bf, no_bf);
	return (sum_af == b  &&  sum_bf == a) ? 1 : 0;
}
	
///////////////////////////////            checking amicable     //////////////////////////////////////////

int all_amicable_pairs(int sr,int er,int *a)
{
	int k, flag;
	int i , j;
	for(i=sr, k=0; i<er; i++)
	{
		
		for (j=i+1; j<=er; j++)
		{
			flag = is_amicable(i, j);
			if(flag == 1)
			{
				a[k] = i;
				a[k+1] = j;
				k +=2;
			}				
		}
	}
	return k/2;
}

/////////////////////         finding factor    ////////////////////

int find_factor(int n,int *f)
{
	int q,i=0;
	for(q=1;q<=n;q++)
	{
	   if(n%q==0)
	   {
	      *(f+i)=q;
	      i++;
	   }
	}
     return i;
}

//////////////////   calculating sum    ////////////////////////

int summer(int *f,int m)
{
	int s=0,i;
	for(i=0;i<m-1;i++)
	{
		s+=*(f+i);
	}
	return s;
}
