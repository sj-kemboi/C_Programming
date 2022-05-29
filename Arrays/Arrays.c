#include<stdio.h>
int main()
{
	printf("1D Arrays\n");
	/*
	int data[5];
	int index=0;
	while(index<5)
	{
		scanf("%d",&data[index]);
		index++;
	}*/
	
	/*
	int data[5];
	int index=0;
	for(index=0 ; index<5 ; index++)
	{
		printf("%d\t",data[index]);
		
	}*/
	
	/*
	int data[5];
	int sum = 0;
	float average = 0.0;
	int index=0;
	for(index=0 ; index<5 ; index++)
	{
		sum += data[index];
	}
	average = sum / 5.0;
	printf("sum=%d\n",sum);
	printf("average=%f\n",average);*/
	
	
	int binary[8]={0,0,0,0,0,0,0,0};
	int number;
	printf("Enter your number:");
	scanf("%d",&number);
	
	if(number>=0 && number<=255)
	{
		int index=0;
		for(index=7 ; index>=0 ; index--)
		{
		  binary[index] = number%2;
		  number = number/2;
		  if(number == 0)
		  
		  break;
		  
		}
		printf("Binary=");
		int x=0;
		for(x=0 ; x<8 ; x++)
		{
			printf("%d",binary[x]);
		}
		printf("\n");
			
	}
	else
	{
		printf("Enter a number between 0 and 255");
	}
	
	//printf("2D Arrays:\n");
	
	/*
	int marks[2][5];
	int rows=0;
	for(rows=0 ; rows<2 ; rows++)
	{
		int cols=0;
		for(cols=0 ; cols<5 ; cols++)
		{
			scanf("%d\t",&marks[rows][cols]);
		}
	}*/
		
	/*	
    int marks[2][5];		
	int rows=0;
	for(rows=0 ; rows<2; rows++)
	{
		int cols=0;
		for(cols=0 ;cols<5 ; cols++)
		{
			printf("%d\t",marks[rows][cols]);
		}
		printf("\n");
	
	}*/
	
	/*
	int marks[2][5];
	int rows=0;
	for(rows=0 ; rows<2 ; rows++)
	{
		int sum =0;
		int cols=0;
		for(cols=0 ; cols<5 ; cols++)
		{
			sum += marks[rows][cols];
		}
		float average = sum / 5.0;
		printf("sum = %d\n",sum);
		printf("average=%f\n",average);
	}*/
	
	/*	
	int marks[3][5];
	int rows=0;
	for(rows=0 ; rows<3 ; rows++)
	{
		int sum=0;
		int cols=0;
		for(cols=0 ; cols<5 ; cols++)
		{
			printf("\nEnter marks per subject:");
			
			scanf("%d",&marks[rows][cols]);
			
			sum += marks[rows][cols];
		}
		float avg = sum /5.0;
		
		printf("Sum=%d\n",sum);
		
		printf("Average=%f\n",avg);
	}
	*/
	
  return 0;
}
