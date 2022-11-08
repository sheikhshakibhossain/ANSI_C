#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	int largest=-9999;
	for (int i=0; i<n; i++)
		if (arr[i] > largest)
			largest = arr[i];
	
	int firstPos=0;
	for (int i=0; i<n; i++) {
		if (arr[i]==largest && firstPos==0)
			firstPos++;

		else if (arr[i]==largest && firstPos != 0)
			arr[i] = 0;
	}

	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

