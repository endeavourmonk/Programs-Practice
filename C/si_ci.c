#include<stdio.h>
#include<math.h>
typedef struct
{
	float t;
	float r;
	float p;
}details;

///////////////////       prototype declarations     ///////////////

float compound_intrest(details b,float *ac, float f);
float simple_intrest(details b,float *as);

main()
{
	int w;
	float si,ci,as,ac,f;
	details a;
	printf("enter amount ");
	scanf("%f" ,&a.p);
	printf("enter rate of intrest ");
	scanf("%f" ,&a.r);
	printf("enter time in year ");
	scanf("%f" ,&a.t);
	printf("enter 1 for simple intrest and 0 for compound intrest");
	scanf("%d",&w);
	if(w==1)
	{
		si=simple_intrest(a,&as);
		printf("simple intrest is %f",si);
		printf("total amount = %f",as);
		return 0;
	}
	else
	{
		printf("enter compounding frequency");
		scanf("%f",&f);
		ci=compound_intrest(a,&ac,f);
		printf("compound intrst is %f",ci);
		printf("total amount = %f",ac);
		return 0;
	}	
	
}

////////////////    simple intrest   ////////////////

float simple_intrest(details b,float *as)
{
	*as = b.p + (b.p*b.r*b.t)/100;
	return (b.p*b.r*b.t)/100;
}

////////////////   compound intrest    //////////////

  float compound_intrest(details b,float *ac, float f)
{
	float CI;
	CI=b.p*pow((1+b.r/f),(f*b.t))- b.p;
	*ac= CI + b.p;
	return CI;
} s
