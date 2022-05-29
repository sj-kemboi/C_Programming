#include<stdio.h>

int main()
{

	int age;

	scanf("%d",&age);

  if(age>=0 && age<=10)
    {
    	printf("cha baba cha mama and stuff");
	}
  else if(age>=11 && age<=15)
    {
        printf("still a kid");
	}
  else if(age>=16 && age<=30)
    {
    	printf("dating scene");
	}
  else if(age>=31 && age<=50)
    {
    	printf("married");
	}
  else if(age>=51 && age<=80)
    {
    	printf("enjoy marriage or get divorced");
	}
  else if(age>=81)
    {
    	printf("hatambui mapenzi bado");
	}

return 0;

}
