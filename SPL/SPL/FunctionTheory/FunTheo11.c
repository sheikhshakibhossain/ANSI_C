#include <stdio.h>

int sumFunc(int n) 
{
	int sum = 0;
	for (int i=1; i<=n; i++)
	{
		int num;
		scanf("%d", &num);
		sum += num;
	}
	printf("Sum In Function: %d\n", sum);
	return sum;
}

int main() {
	
	int n;
	scanf("%d", &n);
	int sumInMain = sumFunc(n);
	printf("Sum In Main: %d\n", sumInMain);
	
	return 0;
}

