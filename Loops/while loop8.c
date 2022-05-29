#include<stdio.h>

int main()
{
	double e=1;
	
	int factorial=1;
	
	int i=1;
	
	while(i<=100)
	
	{
		
		int  fact=i*factorial;
		
		e+=(1.0/factorial);
		
		factorial=fact;
		
		i++;
		
	}
	
	printf("e=%lf",e);
	
	
	return 0;
}
