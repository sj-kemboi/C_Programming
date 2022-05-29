#include<stdio.h>

int main()
{
	int a=1;
	
	double sum=0.0;
	
	while(a<=100)
	
	{
		sum += 1.0/(a*a);
		
		a++;
		
	}
	
	printf("sum=%lf",sum);
	
	return 0;
	
}
