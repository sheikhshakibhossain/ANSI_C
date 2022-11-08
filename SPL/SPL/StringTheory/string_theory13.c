#include <stdio.h>

int main() {
	
	char str[100], match[10];
	gets(str);
	int len = 0;
	while (str[len] != '\0') 
		len++;
	
	gets(match);
	int lenM = 0, count = 0;
	while (match[lenM] != '\0') 
		lenM++;
	
	for (int i=0; i<len; i++) 
	{
		if (str[i] == match[0]) 
		{
			int k = 0, flag = 1;
			for (int j=0, l=i; j<lenM; j++, l++) 
			{
				if ( str[l] != match[j] ) 
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
				count++;
		}
	}
	printf("%d\n", count);
	
	return 0;
}

