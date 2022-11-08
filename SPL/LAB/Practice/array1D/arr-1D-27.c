#include <stdio.h>
/* WAP that will take n integers into an array A and m positive integers into array B. Now
find the intersection (set operation) of array A and B. */

int main() {
	
	int n,m;

	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	scanf("%d", &m);
	int b[m];
	for (int i=0; i<m; i++)
		scanf("%d", &b[i]);
	
	int c[100], k=0, flag=0;
	for (int i=0; i<n; i++) //array a
	{
		for (int j=0; j<m; j++) //array b
		{
			if (a[i] == b[j])
			{
				c[k] = a[i];
				k++;
				flag = 1;
			}
		}
	}

	if (flag == 1){
		for (int i=0; i<k; i++)
			printf("%d ", c[i]);
	}
	else
		printf("Empty set\n");	
		
	
	return 0;
}

