#include<stdio.h>

int main()
{
	char month;
	
	int number;
	
	scanf("%d",number);
	
  if(number == 1)
    {
    	month="J";
	}
  else if(number == 2)
    {
    	month="F";
	}
  else if(number == 3)
    {
    	month="M";
	}
  else if(number == 4)
    {
   	    month="A";
    }
  else if(number == 5)
    {
    	month="M";
	}
  else if(number == 6)
    {
    	month="J";
	}
  else if(number >= 7)
    {
    	month="I";
	}
	
  return 0;
}
