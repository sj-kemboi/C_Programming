#include<stdio.h>

int main()
{
	int length;
	
	int width;
	
	printf("enter a value");
	scanf("%d",&length);
	
	printf("enter a value");
	scanf("%d",&width);
	
  if(length>=0 && width<=10)
   {
   	float perimeter=length+width+length+width;
   	printf("perimeter of a rectanle of length%d && width%d is%f",length,width,perimeter);
   }
   
      return 0;
}
