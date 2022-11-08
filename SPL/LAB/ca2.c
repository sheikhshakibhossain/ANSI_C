#include <stdio.h>

int main() {
	
	int n,q;
	scanf("%d %d", &n, &q);

	// make an array of n size
	int sack[n], ans[q];
	for (int i=0; i<n; i++)
		scanf("%d", &sack[i]);
		

	int k = 0;
	// query
	for (int x=0; x<q; x++)
	{
		int queryType, i, j, v, sum=0;
		scanf("%d", &queryType);

		switch(queryType)
		{
			case 1:
				scanf("%d", &i);
				ans[k] = sack[i];
				k++;
				sack[i] = 0;
				break;

			case 2:
				scanf("%d %d", &i, &v);
				sack[i] += v;
				break;

			case 3:
				scanf("%d %d", &i, &j);
				for (int l=i; l<=j; l++)
					sum += sack[l];
				
				ans[k] = sum;
				k++;
				break;
		}

	}

	printf("\n");
	for (int i=0; i<k; i++) // ans
		printf("%d\n", ans[i]);

	for (int i=0; i<k; i++) // sack
		printf("%d ", sack[i]);
	
	
	return 0;
}

