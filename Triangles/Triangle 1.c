#include<stdio.h>

int main()
{
	/*
	int rows = 0;
	while(rows<=6){
		
		int cols = 0;
		while(cols<=6){
			
			if(cols<=rows)
			printf(" * ");
			
			else
			printf(" ");
			
			cols++;
		}
		printf("\n");
		rows++;
	}*/
	
	
	/*
	int rows=6;
	while(rows>=0){
		
		int cols=0;
		while(cols<=6){
			
			if(cols<=rows)
				printf(" * ");
				
				else
				printf(" ");
				
				cols++;
		
		}
		printf("\n");
		rows--;
	}*/
	
	/*
	int rows=0;
	while(rows<=6){
		
		int cols=0;
		while(cols<=6){
			
			if(rows!=0 && cols < rows)
			printf(" ");
			
			else
			printf(" * ");
			
			cols++;
		}
		printf("\n");
		rows++;
	}*/
	
	int rows=6;
	while(rows>=0){
		
		int cols=0;
		while(cols<=6){
			
			if(cols<=rows)
			printf(" ");
			
			else
			printf(" * ");
			
			cols++;
			
		}
		printf("\n");
		rows--;
	}
	
	
}
