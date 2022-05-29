#include<stdio.h>

int main()
{
	int n;
	
	int f0=0;
	
	int f1=1;
	
	printf("Enter a number");
	
	scanf("%d",&n);
	
	printf("%d\n%d",f0,f1);
	
	for(n-2>0;n--;)
	{
		int next=f0+f1;
		
		printf("\n%d",next);
		
		f0=f1;
		
		f1=next;
		 
	}
	return 0;
}
