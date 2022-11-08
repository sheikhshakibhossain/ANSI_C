#include <stdio.h>

int main()
{
	// 1^2x2 + 2^2x3 + 3^3x4 + ........ + n ...
	int i,n,sum=0;
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		sum = sum + (i*i)*(i+1); // if i+1 replaced with i=i+1 or i++, the whole loop is infected because var. i is loop controller here ...
	}
	printf("sum = %d \n", sum);

	return 0;
}

