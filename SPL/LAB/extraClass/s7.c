#include <stdio.h>
#include <ctype.h>
#define MAX 100

void toggleString(char str[])
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
}

int main() 
{
	char str[MAX];
	fgets(str, MAX, stdin);
	toggleString(str); // call by reference
	puts(str);

	return 0;
}