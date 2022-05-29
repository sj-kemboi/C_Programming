#include<stdio.h>

int main()
{
	int s;
	
	scanf("%d",&s);
	
	int factorial=1;
	
	while(s>0)
	{
		factorial=factorial*s;
		
		s--;
		
	}
	
	printf("factorial=%d",factorial);
	
	return 0;
	
}
