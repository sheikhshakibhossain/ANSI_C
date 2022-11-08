#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter first interger: ");
	scanf("%d", &a);
	printf("Enter second interger: ");
        scanf("%d", &b);

	c=a;
	a=b;
	b=c;

	printf("A = %d and B = %d", a,b);

	return 0;
}

