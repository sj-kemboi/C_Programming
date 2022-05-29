#include<stdio.h>
int main()
{
	//declare a 2D array - 2rows, 5cols
	int arr[2][5];
	
	//Sum starting at0 so we can assign values
	int sum;
	int average;
	
	//int i to iterate the number of rows
	int i;
	for(i=0; i<2; i++)
	{
		sum = 0;
		
		//Getting marks for student 1
		printf("\nEnter marks for student %d: \n", (i + 1));
		
		//int j to iterate number of cols
		int j;
		for(j=0; j<5; j++)
		{
			//Talking to the user
			printf("Enter mark %d: ", (j + 1));
			
			//Read the values and store them in the same row but different cols
			scanf("%d", &arr[i][j]);
			
			//Summing up values as entered in the cols
			sum += arr[i][j];
		}
		
		average = sum /5;
		
		printf("The sum is: %d", sum);
		printf("The average is: %d", average);
		
		printf("\n");
	}
}
