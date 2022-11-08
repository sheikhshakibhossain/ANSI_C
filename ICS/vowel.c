#include <stdio.h>

int main()
{
	char x;
	printf("enter an alphabet : ");
	scanf("%c", &x);
	if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
	{
		printf("%c is vowel \n", x);
	}
	else
		printf("%c is consonant \n", x);

	return 0;
}
