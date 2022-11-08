#include <stdio.h>

int main() 
{
	char str[100];
	fgets(str, 100, stdin);
	char sorted[100];
	int result[100];

	for (int i=0;  str[i]!='\0';  i++)
	{
		int freq = 1;
		for (int j=i+1;  str[j]!='\0';  j++)
		{
			if (str[i] == str[j]) 
			{
				freq++;
			}
		}
		result[i] = freq;
	}
	for (int i=0;  str[i]!='\0';  i++) {
		printf("'%c' -> %d\n", str[i], result[i]);
	}

	return 0;
}
