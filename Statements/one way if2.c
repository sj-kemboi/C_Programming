#include<stdio.h>

int main()

{
	#define PI 3.142
	
	int radius;
	
	scanf("%d",&radius);
	
	if(radius>=0);
   {
   	 float area=radius*radius*PI;
   	 
   	 printf("Area of a circle of radius%d is %f",radius,area);
   }
   
  return 0;
  
}
