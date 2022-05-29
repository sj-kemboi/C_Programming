#include <stdio.h>

int main() {
	
	int a = 8;
	int *aptr = &a;
	
	printf("a=%d:",a);
	printf("\naddress of a=%X:",aptr);
	printf("\naddress of a=%X:",&a);
}
