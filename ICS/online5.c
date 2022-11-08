#include <stdio.h>
#include <math.h>

int main()
{       
	int i,n,sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
			sum = sum - ( (i*i) / ((i+1-i)*i) );
		else
			sum = sum + ( (i*i) / ((i+1-i)*i) );
	}
	printf("sum = %d ", sum);

	return 0;
}

