#include <stdio.h>

int main() {
	
	//  7. Inverted Hollow Half Pyramid in C 
	int n;
	scanf("%d", &n);
	
	for(int i=n; i>=0; i--)
	{
		for(int j=1; j<=i; j++)
		{
			if (i==1 || i==n || j==1 || j==i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}

