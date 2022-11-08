#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);
	int len =0;
	while (str[len] != '\0')
		len++;
	
	char rev[len];
	rev[len-1] = '\0';
	int k = len;

	for (int i=0; i<len; i++)
	{
		if (str[i] == ' ')
		{
			
		}
	} 
	
	return 0;
}

