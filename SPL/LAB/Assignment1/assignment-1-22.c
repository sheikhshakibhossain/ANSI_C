#include <stdio.h>

int main() {
	
	// 22. Half Pyramid of Alphabets in C 
	char last;
	scanf("%c", &last);

	for (char i='A'; i<=last; i++)
	{
		for (char j='A'; j<=i; j++)
			printf("%c ", i);

		printf("\n");
	}
	
	return 0;
}

