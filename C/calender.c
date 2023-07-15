#include <stdio.h>

typedef struct
{
	int d;
	int m;
	int y; 
}Date;


int check_leap(int y1)
{
	int r;
                      r = (y1%100==0) ? y1%400 : y1%4;
	return (r==0) ? 1 : 0;
}

//////////////// Body of get_days_of_month Function/////////////////////
int get_days_of_month(Date dt) 
{
	int c;
	
	if(dt.m==2)
	{
		c=check_leap(dt.y);
		return (c==1) ? 29 : 28;
	}
	
	return (dt.m==1||dt.m==3||dt.m==5||dt.m==7||dt.m==8||dt.m==10||dt.m==12)
	? 31 : 30;
}
/////////////////////////////////

int diff_date(Date date1, Date date2)
{
	int k, sd, td, z;
	Date diff,dt;
	
	if(date2.d < date1.d)
	{
		z = get_days_of_month(date2);
		date2.d = date2.d + z;
		(date2.m)--;
	}
	diff.d = date2.d - date1.d;
	
	
	if(date2.m < date1.m)
	{
		date2.m = date2.m + 12;
		(date2.y)--;
	}
	diff.m = date2.m - date1.m;
	diff.y = date2.y - date1.y;
	
	printf("%d-%d-%d",diff.d, diff.m, diff.y);
	
	for(sd=0, k=1; k <= diff.m; k++)
	{
		dt.m = k;
		dt.y = 1;
		sd += get_days_of_month(dt);
	}
	
	td = diff.d + sd + diff.y * 365;
	
	for(k=date1.y; k <= date2.y; k++)
	{
		if(check_leap(k)==1) td++;
	}
	return td;
}

int main ()
{
	int days,rem;
	Date date1,date2;
	printf("enter date1-");
	scanf("%d",&date1.d);
	printf("enter month1-");
	scanf("%d",&date1.m);
	printf("entr year 1-");
	scanf("%d",&date1.y);
	printf("enter date2-");
	scanf("%d",&date2.d);
	printf("enter month 2-");
	scanf("%d",&date2.m);
	printf("enter year 2-");
	scanf("%d",&date2.y);
	
	days = diff_date(date1,date2 );
	rem = days%7;
	
	printf("No of days = %d\n", days);
	switch(rem)
	{
		case 0: printf("sunday");
		break;
		case 1 : printf("monday");
		break;
		case 2 : printf("tuesday");
		break;
		case 3 : printf("wednesday");
		break;
		case 4 : printf("thrusday");
		break;
		case 5 : printf("friday");
		break;
		case 6 :printf("saturday");
		
	}
	return 0;	
 } 