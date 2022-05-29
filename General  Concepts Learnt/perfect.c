#include<stdio.h>
int main()
{/*
	int perfect;
	int sum;
	
	int i;
	
	for(perfect = 1 ; perfect <= 10000 ; perfect ++)
	{
		sum = 0;
		 for(i = 1 ; i < perfect ; i++)
		 {
		 	if(perfect % i == 0)
		 	{
		 		sum += i;
			}
		 }
		 if(sum == perfect)
		 {
		 	printf("%d is a perfect number\n",perfect);
		 }
	}
	return 0;
	
	int a;
	int b = 0;
	int c = 1;
	printf("How many fibonacci numbers do you need?");
	scanf("%d",&a);
	printf("%d\t%d\t", b , c);
	
	for(a = 0 ; a < 15 ; a++)
	{
		int next = b + c;
		printf("%d\t",next);
		
		b = c;
		c = next;
	}
	
	
	int x;
	scanf("%d",&x);
	
	int fact = 1;
	int i;
	
	for(i = x ; i > 0 ; i--)
	{
		fact *= i;
		
	}
	printf("Factorial of %d = %d",x , fact);*/
	
	int num = 1;
	int sum;
	int j;
	
	while(num <= 10000)
	{
		sum =0;
		j = 1;
		while(j < num)
		{
			if(num % j == 0)
			{
				sum += j;
			}
		j++;
		}
		if( num == sum)
		{
			printf("%d is perfect\n",num);
		}
		num ++;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
