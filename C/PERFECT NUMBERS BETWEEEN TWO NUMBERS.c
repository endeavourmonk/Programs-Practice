#include <stdio.h>
main ()
{
	int a,b,c,t,f,p;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("___________***********perfect numbers between %d and %d are as as follows********_____________",a,b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;		
	}
	for(t=a;t<=b;t++)
	{
		f=0;
		for(p=1;p<t;p++)
		{
			if(t%p==0)
			f=f+p;
		}
		if(f==t)
		printf("%d\n\n\n",t);
		
	}
	printf("____________________**********that's all*********____________");
	return 0;
}


