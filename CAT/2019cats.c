#include<stdio.h>

int summation(int *value,int size)
{
	int sum = 0;
	int i;
	for(i = 0 ;i < size ; i++){
		
		sum += value[i];
	}
	return sum;	
}
int avg(int value[],int size)
{
	int total = summation(value,size);
	float average=(float)total/size;
		
		return average;
}
int main()
{
	int marks[5];
	FILE *shei;
	shei = fopen("marks.csv","w");
	
	fprintf(shei,"%s %s %s %s %s %s %s %s","Name","BCS110","BCS111","BCS112","BCS114","BCS116"
	,"Total","Mean\n");
	
	int i;
	for(i = 0 ; i<10 ;i++)
	{

	printf("Processing student %d:\n",(i+1));
	
	char name[1000];
	printf("Enter name:");
	scanf("%s",name);
	
	fprintf(shei,"%s,",name);
	
	int j=0;
	while(j<5)
	{
		
		int mark;
		printf("Enter mark for subject %d:",(j+1));
		scanf("%d",mark);
		
		marks[j]=mark;
		
		fprintf(shei,"%d,",mark);
		j++;
	}
	int total=summation(marks,5);
	fprintf(shei,"%d,",total);
	
	float average=avg(marks,5);
	fprintf(shei,"%f,",average);
	
	fprintf(shei,"\n");
	
   }
	
	return 0;
}
