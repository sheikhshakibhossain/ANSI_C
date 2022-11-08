#include <stdio.h>

int main() {
	
	int n, counter=1;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		for (int j=n-1; j>=i; j--) // space
			printf(" ");
		
		for (int j=1; j<=2*i-1; j++) 
		{
			if (j==1){
				printf("%d", counter);
				counter++;
			}
			else if (j==2*i-1)
				printf("1");
			else
				printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

