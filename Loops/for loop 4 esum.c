#include<stdio.h>

int main()

{
	int i;
	
	double sum=0.0;
	
	for(i=1;i<=100;i++)
	
	{
		
		sum += 1.0/(i*i);
		
	}
	
	printf("sum= %lf",sum);
	
	return 0;
	
}
