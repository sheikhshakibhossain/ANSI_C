#include <stdio.h>
#include <ctype.h>

int main() {
	
	int n, counter = 0;
	scanf("%d", &n);
	char arr[n];

	for (int i=0; i<n; i++)
	{
		scanf("%c", &arr[i]);
		char check = toupper(arr[i]);

		if (check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U')
			counter++;
	}
	printf("Count: %d\n", counter);
	
	return 0;
}

