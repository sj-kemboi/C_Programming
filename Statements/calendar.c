#include <stdio.h>

int main() {
	
	int day;
	int interval;
	
	printf("Enter the day of the week: ");
	scanf("%d", &day);
	
	printf("Enter the number of days: ");
	scanf("%d", &interval);
	

	switch(day) {
		case 1:
			printf("Today is Monday");
			break;
		case 2:
			printf("Today is Tuesday");
			break;
		case 3:
			printf("Today is Wednseday");
			break;
		case 4:
			printf("Today is Thursday");
			break;
		case 5:
			printf("Today is Friday");
			break;
		case 6:
			printf("Today is Saturday");
			break;
		case 7:
			printf("Today is Sunday");
			break;
	}
	
	int next = (day + interval)%7 + 1;
	switch(next) {
		case 1:
			printf("\nThe next day will be Monday");
			break;
		case 2:
			printf("\nThe next day will be Tuesday");
			break;
		case 3:
			printf("\nThe next day will be Wednseday");
			break;
		case 4:
			printf("\nThe next day will be Thursday");
			break;
		case 5:
			printf("\nThe next day will be Friday");
			break;
		case 6:
			printf("\nThe next day will be Saturday");
			break;
		case 7:
			printf("\nThe next day will be Sunday");
			break;
	}
	
	  return 0;
}
