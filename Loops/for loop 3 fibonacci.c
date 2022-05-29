#include<stdio.h>

int main()

{
/*	
	int n;
	
	int f0=0;
	
	int f1=1;
	
	printf("how many fibonacci numbers do you need?");
	
	scanf("%d",&n);
	
	printf("%d\n",f0);
	
	printf("%d\n",f1);
		
	for(n-2>0;n--;)
	
	{
		int next=f0+f1;
		
		printf("%d\n",next);
		
		f0=f1;
		
		f1=next;
		
	}*/
	
	int x;
	
	int f0=55;
	
	int f1=55;
	
	printf("Enter the no of fibonacci numbers:");
	
	scanf("%d",&x);
	
	printf("%d\n",f0);
	
	printf("%d\n",f1);
	
	for(x=55 ; x++)
	{
		int next= f0 + f1;
		printf("%d",next);
		
		f0 = f1;
		
		f1 = next;
	}
	
	return 0;
	
}
