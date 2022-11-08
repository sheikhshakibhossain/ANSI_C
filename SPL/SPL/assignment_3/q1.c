#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() 
{
	char str[100];
	fgets(str, 100, stdin);
	str[strcspn(str, "\n")] = '\0';
	char original[100];
	strcpy(original, str);
	int result[100] = {0};

	for (int i=0;  str[i]!='\0';  i++)
	{	
		for (int j=i+1;  str[j]!='\0';  j++)
		{
			if (str[i] == str[j]) 
			{
				int k;
				for (k=j; str[k]!='\0';  k++)
				{
					str[k] = str[k+1];
				}
			}
		}
	}

	int k = 0;
	for (int i=0;  str[i]!='\0';  i++)
	{
		int freq = 0;
		for (int j=0;  original[j]!='\0';  j++)
		{
			if ( toupper(str[i]) == toupper(original[j]) ) {
				freq++;
			}
		}
		result[k] = freq;
		k++;
	}

	for (int i=0;  str[i]!='\0';  i++)
	{
		if (str[i] != ' ') { // space baad a print korbe
			printf("'%c'->%d\n", toupper(str[i]), result[i]);
		}
	}

	return 0;
}
