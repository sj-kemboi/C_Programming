#include<stdio.h>
int main()
{
	FILE * chela = fopen("chela.csv","w");
	
	
	
	
	
	int money[3][5];
	
	int sum;
	
	int row;
	for(row = 0 ; row < 3 ; row++){
		
		printf("Employee %d:\n",(row +1));
		fprintf(chela,"Employee %d:\n",(row +1));
		
		sum = 0;
		
		int col;
		for(col = 0 ; col < 5 ; col++){
			
			printf("Salary for month %d :",(col + 1));
			
			scanf("%d",&money[row][col]);
			
			sum += money[row][col];
			
			
			fprintf(chela, "Month %d: %d\t", (col+1), money[row][col]);
			
		}
		printf("sum=%d",sum);
		fprintf(chela,"sum=%d", sum);
		
		
		printf("\n");
		fprintf(chela, "\n\n");
	}
	

}
