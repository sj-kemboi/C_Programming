#include<stdio.h>

int main()

{
	int number;
	
	printf("enter a number");
	
	scanf("%d",&number);
	
	
	switch(number)
	
	{
	
		case 1:
			printf("Chichi");
			  break;
	    
	    case 2:
	    	printf("Ken");
	    	  break;
	    	  
		case 3:
			printf("Stacey");
			  break;
			  
		case 4:
			printf("Pato");
			  break;
			  
		case 5:
			printf("Don");
			  break;
			  
		default:
			printf("\aTry again!");
			break;
	}
			  
	return 0;
	
}
