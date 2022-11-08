#include <stdio.h>

void rev_words(char str[])
{
	int i = 0, len = 0;
	while(str[i] != 0)
	{
		len++;
		i++;
	}

	char rev[len];
	int k = len - 1;
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == ' ') // space
		{
			for (int j=0; j<i; j++)
			{
				rev[k] = str[j];
				k--;
			}
			rev[k] = ' ';
		}
		i++;
	}
	puts(rev); 
}

int main() 
{
	char str[100];
	fgets(str, 100, stdin);
	rev_words(str); // NOT OK

	return 0;
}
