#include<stdio.h>

int main()
{
	double y;
	double better;
	
	printf("enter a number");
	
	scanf("%lf",&y);
	
	
	double approximation = y/2;
	
	double error = y - (approximation * approximation);
	
	
	while(error>0.000001 || error<0.000001)
	
	{
		
		better = 0.5(approximation + y/approximation);
		
		approximation = better;
		
		error = y - (approximation * approximation);
		
	}
	
	printf("squqre root=%lf\n",approximation);
	
	return 0;
}
