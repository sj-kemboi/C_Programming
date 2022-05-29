#include<stdio.h>

int main()
{
	/*
	int count=7;
	
	int *countptr=&count;
	
	printf("count is %d\n",count);
	
	printf("address of count=%X\n",&count);
	
	printf("value stored in countptr=%X\n",&countptr);
	
	return 0; 
	*/
	
	float Sheilla=8.0;
	
	float *Sheillaptr=&Sheilla;
	
	Sheillaptr= & Sheilla ;
	
	printf("Sheilla=%f\n",Sheilla);
	
	printf("Address of Sheilla=%X\n",*Sheillaptr);
	
	printf("Value stored in Sheillaptr=%X\n",Sheillaptr);
}
