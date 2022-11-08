#include <stdio.h>

int main() {
	
	int size;
	scanf("%d", &size);
	int arr[size];
	for (int i=0; i<size; i++)
		scanf("%d", &arr[i]);

	for (int i=0; i<size; i++)
	{
		for (int j=i+1; j<size; j++)
		{
			if (arr[i] == arr[j])
			{
				for (int k=j; k<size; k++)
				{
					arr[k] = arr[k+1];
				}
				size--;
				j--;
			}
		}
	}

	for (int i=0; i<size; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

