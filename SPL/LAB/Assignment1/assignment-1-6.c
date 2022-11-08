#include <stdio.h>

int main() {
	
	//  6. Hollow Pyramid Star Pattern
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)	
	{
		// space print
		for (int k=n; k>=i; k--) printf(" ");
		// star print
		for(int j=1; j<=2*i-1; j++)
		{
			if (i==1 || i==n || j==1 || j==2*i-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}

