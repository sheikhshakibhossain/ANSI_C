#include <stdio.h>
/* Write a program (WAP) that will take N numbers as inputs and compute their average. */

int main() {
	
	int n;
	float sum=0;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		float num;
		scanf("%f", &num);
		sum+=num;
	}
	printf("AVG of %d inputs: %f\n", n, sum / n);
	
	
	return 0;
}

