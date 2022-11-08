#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n], prime[n], k=0;

	for (int i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]);
		int flag = 1;
		for (int j=2; j<=arr[i]/2; j++) // ok
		{
			if ( arr[i]%j == 0 ) {
				flag = 0;
				break;
			}
		}

		if (flag == 1 || arr[i]==1) {
			prime[k] = arr[i];
			k++;
		}
	}
	
	for (int i=0; i<k; i++)
		printf("%d ", prime[i]);
	
	return 0;
}

