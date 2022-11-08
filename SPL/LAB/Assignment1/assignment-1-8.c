#include <stdio.h>

int main() {
	
	//  8. Full Hollow Inverted Pyramid in C 
	int n;
	scanf("%d", &n);
	
	for(int i=n; i>=1; i--)	
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

