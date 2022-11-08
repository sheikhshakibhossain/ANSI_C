#include<stdio.h>
int main()
{
	int n,m, a[100]={0}, b[100]={0};
	
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	scanf("%d", &m);
	for (int i=0; i<m; i++)
		scanf("%d", &b[i]);

	if (n>m) {
		for (int i=0; i<n; i++) 
		{
			a[i] = a[i] + b[i];
			b[i] = a[i] - b[i];
			a[i] = a[i] - b[i];
		}
	}
	else {
		for (int i=0; i<m; i++) 
		{
			a[i] = a[i] + b[i];
			b[i] = a[i] - b[i];
			a[i] = a[i] - b[i];
		}
	}
	
	printf("Array A : ");
	for (int i=0; i<m; i++)
		printf("%d ", a[i]);
	printf("\n");

	printf("Array B : ");
	for (int i=0; i<n; i++)
		printf("%d ", b[i]);
	printf("\n");

	return 0;
}
