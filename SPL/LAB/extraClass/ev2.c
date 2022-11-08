#include <stdio.h>

void sortString(char str[])
{
	int i = 0, len = 0;
	while(str[i] != 0)
	{
		len++;
		i++;
	}
	
	for (int i=0; i<len; i++)
	{
		for (int j=i+1; j<len; j++)
		{
			if (str[i] > str[j])
			{
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}

int main() 
{

	char str[100];
	fgets(str, 100, stdin);
	sortString(str);
	puts(str);

	return 0;
}
