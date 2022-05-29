#include<stdio.h>

int main()
{	
	int n;
	
	int f0=0;
	
	int f1=1;
	
	printf("how many fibonacci numbers do you want?");
	
	scanf("%d",&n);
	
	printf("%d%d",f0,f1);
	
	while(n-2>0)
	
	{
		int next=f0+f1;
		
		printf("\n%d",next);
		
		f0=f1;
		
		f1=next;
		
		n--;
		
	}
	
	return 0;
			
}
