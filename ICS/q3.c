#include <stdio.h>

int main()
{       
	int num,first,last;
	scanf("%d", &num);

	last=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	first=num;
	printf("Sum = %d", first+last);

	return 0;
}

