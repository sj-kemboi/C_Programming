#include<stdio.h>

int main()
{
	int x;
	
	printf("enter a number");
	
	scanf("%d",&x);
	
	int factorial=1;
	
	int i;
	
	for(i=x;i>0;i++)
	
	{
		factorial *=1;
	}
	
	printf("factorial of %d is %d",x,factorial);
	
	return 0;
	
}
