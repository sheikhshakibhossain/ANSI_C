#include <stdio.h>

int main() {
	
	int n, q;
	scanf("%d %d", &n, &q); // 1
	int sack[n];

	for (int i=0; i<n; i++) // 2
		scanf("%d", &sack[i]);

	for (int k=1; k<=q; k++) // 3
	{
		int i,j,v, sum =0;
		scanf("%d", &i);
		switch(i)
		{
			case 1:
				printf("%d\n", sack[i]);
				break;

			case 2:
				scanf("%d", &v);
				sack[i] += v;
				break;
			
			case 3:
				scanf("%d %d", &v, &j);
				for (int v; v<=j; v++)
					sum += sack[v];
				
				printf("%d\n", sum);
				break;

		}
		
		
	}


	// q task

	
	return 0;
}

