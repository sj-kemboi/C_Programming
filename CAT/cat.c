#include<stdio.h>

int main()
{
	/*
	int n;
	int f0=0;
	int f1=1;
	printf("The First 15 Fibonacci numbers are:");
	scanf("%d",&n);
	printf("%d %d ",f0,f1);
	for(n = 0; n < 15 ;n++)
	{
		int next=f0 + f1;
		printf("%d ",next);
		f0 = f1;
		f1 = next;
	}
	return 0;*/
	
	/*
	int a = 10;
	int b = a++ + 2;
	printf("a=%d",a);
	printf("\t b=%d",++b);*/
	
	/*
	int i=1;
	while(i <= 10)
	{
		if(i>3 && i != 6 || i%3== 0){
			printf("%d\t",i--);
			break;
		}
		i++;
	}*/
	/*
	int i =1;
	for(i = 1 ; i <= 10 ; i++)
	{
		if(i > 3 && i != 6 || i % 3 == 0){
		
		printf("%d\t",i);
		break;}
	}
	return 0;*/
	
	/*
	int marks[3][5];
	int rows = 0;
	for(rows =0 ; rows <3 ; rows++)
	{
	    int sum = 0;
		int cols = 0;
		for(cols = 0 ; cols <5 ; cols++){
			
			sum += marks[rows][cols];}
			
			float mean = sum/5.0;
			printf("The Mean =%f\n",mean);
	}*/
	/*
	int n;
	int f0 = 0;
	int f1 = 1;
	printf("The first 15 Fibonacci numbers are:");
	scanf("%d",&n);
	printf("%d\t%d\t",f0,f1);
	for(n = 0 ; n < 15 ; n++)
	{
		int next= f0 + f1;
		printf("%d\t",next);
		f0 = f1;
		f1 = next;
	}*/
	
	/*
	int rows=0;
	for(rows=5 ; rows>=0 ;rows++)
	{
		int cols=0;
		for(cols=0 ; cols<=5 ; cols--)
		{
			if(rows=cols == 0)
			printf(" * ");	
		}
	}*/
	/* 
	int rows=5;
	while(rows >= 0)
	{
		int cols=0;
		while(cols <= rows)
		{
			if(rows == cols)
			{
				printf(" * ");
			}
			else
			printf(" ");
			
			cols ++;
		}
		
		printf("\n");
		rows --;
	}
	
	/*
	float pi=3.14159265; 
	
	float volume(int radius,int length)
	
	{
		
		return pi * radius * radius((4/3)radius + length);
		
	}
	
	
	
	int main()
	{
		int r;
		printf("Enter the radius::");
		scanf("%d",&r);
		
		int a;
		printf("Enter the length::");
		scanf("%d",&a);
		
		printf("Volume=%f\n",volume(r , a));
	}
	return 0;*/
	/*
	int h;
	int m;
	int s;
	
	scanf("%d%d%d",&h,&m,&s);
	
	if(h==23 && m==00 && s==00)
	{
		h = 22;
		m = 59;
		s = 59;
	}
	else if(h!=23 && m==00 && s==0)
	{
		h--;
		m = 59;
		s = 59;
	}
	else if(m!=00 && s==0)
	{
		m--;
		s = 59;
	}
	else if(s!=00)
	{
		s--;
	}
	printf("Time is:%d %d %d",h,m,s);*/
	
	int number=1;
	int sum=0;
	int i;
	
	while(number<10000)
	{

		for(i=0 ; i<number ; i++)
		{
		
			if(number %i==0){
				sum += i;
			}
		                                                        
		if(sum == number){
			printf("%d is perfect\n",number);
	      	}
	    }
		number ++;
	}
	return 0;
	
	
	
	}
