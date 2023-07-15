#include <stdio.h>

main()
{
	float m1,m2,m3,s,A,per;
	hh :printf("enter marks of Ist subject");
	scanf("%f",&m1);
	printf("enter marks of IInd subject");
	scanf("%f",&m2);
	printf("entr marks of IIIrd subject");
	scanf("%f",&m3);
	printf("\n\n");
	if(m1>100 || m2>100 || m3>100)
	{
	printf("maximum marks of each subject is 100. Enter again valid marks.\n\n");
	printf("_________________________________________________________________________________________________________\n\n");
	goto hh;
	}
	sum(&m1,&m2,&m3,&s);
	printf("total marks obtained by student is %f\n\n",s);
	average(&s,&A);
	printf("average of marks is %f\n\n",A);
	percentage(&s,&per);
	printf("Percentage = %f\n\n",per);
	return 0;
}

void sum(float *M1,float *M2,float *M3,float *SS)
{
	*SS = *M1 + *M2 + *M3;
}

void average(float *a,float *p)
{
	*p= *a/3;
}

void percentage(float *m,float *n)
{
	*n=(*m*100)/300;
}


