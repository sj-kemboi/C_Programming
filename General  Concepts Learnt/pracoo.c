#include<stdio.h>

int main()
{
	int y=4;
	
	int sum=0;
	
	scanf("%d",&y);
	
	while(y<=10)
	
	{
		
		sum = sum + y;
		
		y+=4;
		
	}
	
	printf("sum=%d\n",sum);
	
	return 0;
	
}
