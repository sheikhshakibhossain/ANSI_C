#include <stdio.h>
int pow(int base, int power);

int main()
{       
	printf("%d", pow(3,3));

	return 0;
}


int pow(int base, int power)
{

	int i,product=1;
	for(i=1; i<=power; i++)
	{
		product = product*base;
	}
	return product;
}
