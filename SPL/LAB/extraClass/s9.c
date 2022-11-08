#include <stdio.h>
#include <ctype.h>
#define MAX 100

char* toggleString(char str[]) // returns the array
{
	int i = 0;
	while (str[i] != '\0')
	{
		if( isupper(str[i]) != 0 ) // if true
		{
			str[i] = tolower(str[i]); // OK
		}
		else
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return str; // OK
}

int main() 
{
	char str[MAX];
	fgets(str, MAX, stdin);
	char *ptr;
	ptr = toggleString(str);
	int size = sizeof(str) / sizeof(ptr[0]);
	printf("size = %d\n", size); // OK ,,,, MAX == 100

	int i = 0;
	while (ptr[i] != '\0') // pointer k arr dhoreo kaj kora jay
	{
		printf("%c", *ptr);
		ptr++;
	}

	return 0;
}