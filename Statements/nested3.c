#include<stdio.h>

int main()
{
	int population;

	scanf("%d",&population);

  if(population >= 3000000)
    {
    	printf("NAIROBI");
	}
  else if(population >= 2500000)
    {
    	printf("MOMBASA");
	}
  else if(population >= 2000000)
    {
    	printf("KAKAMEGA");
	}
  else if(population >= 1500000)
    {
    	printf("NAKURU");
	}
  else if(population >= 1000000)
    {
    	printf("KISUMU");
	}
  else if(population >= 500000)
    {
    	printf("TURKANA");
	}
  else if(population <= 499999)
    {
    	printf("hapo si kenya");
	}

  return 0;

}
