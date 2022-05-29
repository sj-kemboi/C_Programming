#include<stdio.h>

int main()
{
	/*FILE * sPtr = fopen("Shei.txt","w");
	
	int a=10;
	int b=20;
	
	int sum= a + b;
	fprintf(sPtr, "a=%d\t b=%d\n sum=%d",a, b, sum);
	
	//fprintf(sPtr,"a=%d\tb=%d\n sum=%d",a,b,sum);
	
	FILE * sPtr=fopen("Shei.txt","a");
	
	int a=10;
	int b=20;
	int avg=(a+b)/2;
	
	fprintf(sPtr,"\navg=%d",avg);*/
	
	FILE * sPtr = fopen("Shei.txt","r");
	
	char c;
	while(1)
	{
		c = fgetc(sPtr);
		
		if(c == EOF)
			break;
		else
			printf("%c",c);
	}
	
	
	
	fclose(sPtr);
	return 0;
}
