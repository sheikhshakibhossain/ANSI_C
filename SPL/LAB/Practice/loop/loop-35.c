#include <stdio.h>

int main() {
	
	int n, original, reverse = 0;
	scanf("%d", &n);
	original = n;

	while (n != 0)
	{
		int remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	if (reverse == original)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}

