#include<iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"The maximum value = ";
	cin>>num;
	
	int count= 0;
	
	int i = 1;
	
	do{
		
		if(num % i == 0)
			count = count + 1;
			
			i++
	}
	while(i <= num)
	
	if(count == 2)
		cout<<"The number is prime";
		
	else
		cout<<"The number is not prime";
	
	}
