#include <stdio.h>
#include <ctype.h>
#define MAX 100

int get_num(char str[], char search)
{
	int i = 0, count = 0;
	while(str[i] != 0)
	{
		if ( toupper(str[i]) == toupper(search) ) {
			count++;
		}
		i++;
	}
	return count;
}

int main() 
{
	char str[MAX];
	fgets(str, MAX, stdin);
	char search;
	scanf("%c", &search);
	int count = get_num(str, search);
	printf("%d\n", count);

	return 0;
}
