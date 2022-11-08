#include <stdio.h>
#include <math.h>

int main()
{       
	int x,y,i,pow=1;
	scanf("%d %d", &x, &y);

	for(i=1; i<=y; i++)
	{
		pow=pow*x;
	}
	printf("output: %d", pow);


	return 0;
}

