#include <stdio.h>
#define MAX 100

void printRev(char str[])
{
	int i = 0, len = 0;
	while(str[i] != 0)
	{
		len++;
		i++;
	}
	len -= 1;
	while (len >= 0)
	{
		printf("%c", str[len]);
		len--;
	}
}

int main() 
{
	char str[MAX];
	fgets(str, MAX, stdin);
	printRev(str);

	return 0;
}
