#include<stdio.h>

int main()
{
	int day;
	
	int year;
	
	printf("enter the day");
	scanf("%d",&day);
	
	printf("enter the year");
	scanf("%d",&year);
	
	if(day == 1)
		printf("Monday");
		
	else if(day == 2)
		printf("Tuesday");
		
	else if(day == 3)
		printf("Wednesday");
		
	else if(day == 4)
		printf("Thursday");
		
	else if(day == 5)
		printf("Friday");
		
	else if(day == 6)
		printf("Saturday");
		
	else if(day == 7)
		printf("Sunday");
		
	else
		printf("\a Not A Day!");
		
	if(year >= 2000 && year <= 2020)
	{
		int day = 1+5*(year-1)%4;
		
		day += 4*(year-1)%100;
		
		day += 6*(year-1)%400;
		
		day += day%7;
		
		printf("\nFirst Jan");
		
		return 0;
		
	}
}
