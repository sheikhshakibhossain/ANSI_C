#include <stdio.h>

int main() {
	
	char str[100];
	gets(str);

	int len = 0;
	while (str[len] != '\0')
		len++;
	
	//int k = len;
	for (int i=0; i<len-1; i++) 
	{
		for (int j=i+1; j<len; j++) {
			if (str[i] == str[j]) {
				for (int k=j; k<len; k++)
					str[k] = str[k+1];
			}
		}
	}
	//str[k] = '\0';
	printf("%s", str);
	
	return 0;
}

