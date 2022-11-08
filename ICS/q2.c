#include <stdio.h>

int main()
{       
	int i,n;
	float sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum=sum+ (i*i*i) / (float)(i+1);
	}
	printf("Sum = %f", sum);

	return 0;
}

