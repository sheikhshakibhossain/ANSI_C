#include <stdio.h>
#include <unistd.h>

int main() {
	
	int n;
	scanf("%d", &n);

	printf("\n\n");
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if (i==1 || i==n || j==1 || j==n || i==j && j<=n/2 || (i+j==n+1 && j > n/2)) {
				printf("* ");
				//usleep(50000); // 0.5 sec
				//sleep(1);
			}
			else {
				printf("  ");
				//usleep(50000); // 0.5 sec
				//sleep(1);
			}
		}
		usleep(240000);
		printf("\n");

	}
	
	return 0;
}

