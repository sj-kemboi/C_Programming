#include<stdio.h>

int main()
{
	int siku;
	int next;

	printf("number of siku");
	scanf("%d",&siku);

	printf("siku next");
	scanf("%d",&next);

	if(siku == 1)
		printf("Monday");

	else if(siku == 2)
		printf("Tuesday");

	else if(siku == 3)
		printf("Wednesday");

	else if(siku == 4)
		printf("Thursday");

	else if(siku == 5)
		printf("Friday");

	else if(siku == 6)
		printf("Saturday");

	else if(siku == 7)
		printf("Sunday");

	else
		printf("not a day");

		return 0;

}
