#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	int check, result[n], index = 0, flag = 0;
	scanf("%d", &check);
	for (int i=0; i<n; i++)
	{
		if (check == arr[i]) {
			result[index] = i;
			index++;
			flag = 1;
		}
	}

	if (flag == 1) {
		printf("FOUND at index position:");
		for (int i=0; i<index; i++) 
		{
			printf(" %d", result[i]);
			if (i != index - 1)
				printf(",");
		}
	}
	else
		printf("NOT FOUND\n");
		
	
	return 0;
}

