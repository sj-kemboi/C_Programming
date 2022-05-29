#include<stdio.h>
int main()
{/*
	printf("Rectangle 1:\n");
	int rows;
	for(rows==0 ; rows<=5 ;rows++)
	{
		int cols;
		for(cols==0 ; cols<=5 ; cols++)
		{
			printf("0 1 2 3 4 5");
			printf("\n");
		}
		
	}*/
	/*
	printf("Triangle 1:\n");
	int rows=0;
	while(rows<=5){
		
		int cols=0;
		while(cols<=5){
			
			if(cols <= rows){
				
				printf(" 7 ");
		   }
		   else
		   printf(" ");
		   cols++;
		}
		printf("\n");
		rows++;
		
	}*/
	
	/*
	printf("Triangle 2:\n");
	int rows=5;
	while(rows>=0)
	{
		int cols=0;
		while(cols<=rows)
		{
			if(cols<=rows)
			printf(" 8 ");
			
			else
				printf("");
				cols++;
			
		}
		
	printf("\n");
	rows--;
    }*/
    
 	/*
 	printf("Triangle 3:\n");
     int rows=0;
     while(rows<=5)
     {
     	int cols=0;
     	while(cols<=5)
     	{
     		if(rows==0 || rows==cols ||rows<cols)
     		printf("%d",cols);
     		
     		else
     		printf(" ");
     		cols++;
		 }
		 printf("\n");
		 rows++;
	 }*/
	 /*
	 printf("Triangle 4:\n");
	 int rows=5;
	 while(rows>=0){
	 	int cols=0;
	 	while(cols<=5){
	 		if(cols==rows || rows==0 ||rows<cols)
	 		printf("%d",cols);
	 		
	 		else
	 		printf(" ");
	 		cols++;
		 }
		 printf("\n");
		 rows--;
	 	
	 }*/
	 /*
	 printf("Line 1:\n");
	 int rows;
	 for(rows=0 ; rows<=5 ; rows++)
	 {
	 	int cols;
	 	for(cols=0 ; cols<=5 ; cols++){
	 		
	 		if(rows==cols)
	 		printf(" %d ",cols);
	 		else
	 		printf(" ");
		 }
		 printf("\n");
	 }*/
	 /*
	 printf("Line 2:\n");
	 int rows;
	 for(rows=5 ; rows>=0 ; rows--){
	 	
	 	int cols;
	 	for(cols=0 ; cols<=5 ; cols++){
	 		
	 		if(rows==cols)
	 		printf("  %d  ",cols);
	 		else
	 		printf(" ");
		 }
		 printf("\n");
	 }*/
	 /*
	 printf("Line 3:\n");
	 int rows;
	 for(rows=0 ; rows<=5 ; rows++){
	 	
	 	int cols;
	 	for(cols=0 ; cols<=5 ;cols++){
	 		
	 		if(rows==5 || cols==0 || rows==cols)
	 		printf("%d",cols);
	 		else
	 		printf(" ");
		 }
		 printf("\n");
	 }*/
	 
	 printf("Open Rectangle:\n");
	 int rows;
	 for(rows=0 ; rows<=5 ; rows++){
	 	
	 	int cols;
	 	for(cols=0 ; cols<=5 ; cols++){
	 		
	 		if(rows==0 || rows==5 ||cols==0 || cols==5)
	 		printf("*");
	 		else
	 		printf(" ");
		 }
		 printf("\n");
	 }
	 
	 
	 
	 
	 
	 
	 
	 
   }
 


