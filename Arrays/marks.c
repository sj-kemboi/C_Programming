#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	FILE * fptr = fopen("marks.txt", "a");
	
	fprintf(fptr, "\nFiles are awesome!");
	fprintf(fptr, "\nI love coding");
	
	/*
	fprintf(fptr, "%s\t %s\t %s\t %s", "Name", "Eng", "Swa", "Chem\n");
	
	
	int i;
	for(i=0; i<3; i++)
	{
		printf("Getting marks for student %d:\n", (i+1));
		
		char names[256];
		printf("Enter name of student: ");
		scanf("%s", &names);
		fprintf(fptr, "%s\t ", names);
		
		int j;
		for(j=0; j<3; j++)
		{
			int mark;
			printf("mark %d: ", (j+1));
			scanf("%d", &mark);
			fprintf(fptr, " %d\t ", mark);
		}
		fprintf(fptr, "\n");
	}
	*/
	
	
	fclose(fptr);
	return 0;
}
