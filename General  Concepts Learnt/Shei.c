#include<stdio.h>
int main()

//#define PI 3.14
{
	
	int n;
	int a=1;
	int b=1;
	
	printf("The first 15 fibonacci numbers are:");
	
	printf("%d %d ", a , b);
	
	for(n=1 ; n<13 ; n++);
	{
		int next = a + b;
		printf("%d",next);
		
		a = b;
		b = next;
	}
	/*
	int rad;
	printf("Enter the radius:");
	scanf("%d",&rad);
	
	float area;
	area = PI * rad * rad;
	
	printf("Area = %f",area);*/
	/*
	int rows;
	for(rows = 0 ; rows <= 4 ; rows++){
		
		int cols;
		for(cols = 0 ; cols <= rows ; cols++){
	
			printf(" * ");
		
		}
		printf("\n");
		
	}*/
	/*
	int x;
	for(x=0 ; x<14 ; x++)
	{
		if(x%3)
		printf("%d=",x);
		
		else
		printf("\Nno!\n");
	}*/
	/*
	FILE * jPtr= fopen("book.txt","a");
	int a = 4;
	int b = 6;
	int avg=(a+b)/2;
	
	int x;
	printf("Value of x:");
	scanf("%d",&x);
	
	int y;
	printf("Value of y:");
	scanf("%d",&y);
	
	int average= (x+y)/2;
	
	
	fprintf(jPtr,"Sheilla\n a=%d b=%d\n avg=%d\n x=%d y=%d\n sum=%d",a,b,avg,x,y,average);
	*/
	/*	
	FILE * jPtr = fopen("book.txt","r");
	char shi;
	
	while(1){
		
		shi = fgetc(jPtr);
		
		if(shi == EOF)
			break;
		else
			printf("%c", shi);
	}
	
	fclose(jPtr);
	*/
	/*
	FILE * ptr = fopen("Ken.txt", "r");
	
	char j;
	
	while(1)
	{
		j = fgetc(ptr);
		
		if(j == EOF)
			break;
		else
			printf("%c", j);
	}
	
	fclose(ptr);*/
	
	int row;
	for(row = 5 ; row >= 0 ; row--)
	{
		int col;
		for(col = 0 ; col<= 5 ; col++){
			
			if(row >= col)
			
			printf(" * ");
		}
		printf("\n");
	}
	
	int i;
	for(i = 0 ; i <=  5 ; i++)
	{
		int j;
		for(j = 5 ; j >= 0 ; j--)
		{
			if(j <= i)
			printf("*");
			
			else
			printf(" ");
			
		}
		printf("\n");
	}
	
	int x;
	for(x = 5 ; x>= 0 ; x--)
	{
		int y;
		for(y = 0 ; y <= 5 ; y++)
		{
			if(y >= x)
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	
	int s;
	for(s = 0 ; s <= 5 ; s++){
		
		int k;
		for(k = 0 ; k <= 5 ; k++){
			
			if(k >= s)
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
	/*
	int a;
	for(a =  0 ; a <= 5 ; a++){
		
		int b;
		for(b = 0 ; b <= 5 ; b++){
			
			if(a >= b)
			printf(" * ");
		}
		printf("\n");
	}
	
	
	int z;
	for(z=1; z<=5; z++)
	{
		int r; 
		for(r=1; r<=5; r++)
		{
			if(r<=z)
			printf("%d", r);
		}
		
		printf("\n");
	}
	int c;
	for(c = 1 ; c <= 5 ; c++)
	{
		int d;
		for(d = 1 ; d <= 5 ; d++)
		{
			if(d <= c)
			printf("%d",c);
		}
		printf("\n");
	}
	int e;
	for(e = 5; e>=0 ; e--){
		
		int f;
		for(f=5 ; f >= 0 ; f--){
			
			if(f >= e)
			printf("%d",e);
		}
		printf("\n");
	}
	
	
	int rowy;
	for(rowy=5; rowy>=1; rowy--)
	{
		int coly;
		for(coly=5; coly>=1; coly--)
		{
			if(coly>=rowy)
				printf("%d", coly);
		}
		printf("\n");
	}
	*/
	
	
	
	
	
	
	
}
