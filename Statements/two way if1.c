#include<stdio.h>

int main()
{
	#define PI 3.142
	 int radius;
	 scanf("%d",&radius);
	 
	if(radius>=0)
	{
		float area=radius*radius*PI;
		printf("area of a ircle of radius%d is%f",radius,area);
	}
	else
	{
		printf("circle cannot have a negative radius");
	}
return 0;
}
