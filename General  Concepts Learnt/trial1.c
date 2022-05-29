#include<stdio.h>

int main()
{
	double a;
	
	printf("Enter a number");
	
	scanf("%lf",&a);
	
	double xn=a/2;
	
	printf("first guess =%lf\n",xn);
	
	int n;
	
	printf("Times to improve your guess");
	
	scanf("%d",&n);
	
	for(n>0; n--;)
	{
		double xn1=0.5*(xn+(a/xn));
		
		xn=xn1;
		
	}
	
	printf("square root of %lf =% lf",a,xn);
	
	return 0;
	
}
