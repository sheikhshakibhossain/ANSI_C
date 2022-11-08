#include <stdio.h>
int str_length(char str[]);
int find_substr(char a[], char b[]);

int main() {
	
	char str1[100], str2[100];
	gets(str1);
	gets(str2);
	//printf("%d", str_length(str1)); // OK
	printf("%d ", find_substr(str1, str2)); // OK
	
	return 0;
}

int str_length(char str[]) {

	int len = 0;
	while (str[len] != '\0')
		len++;

	return len;
}

int find_substr(char a[], char b[]) {

	int len1 = str_length(a);
	int len2 = str_length(b);
	//printf("len1: %d len2: %d\n", len1, len2); // OK
	//printf("str1: %s\nstr2: %s\n", a, b);
	int flag = 0;

	for (int i=0; i<len1; i++) 
	{
		if (a[i] == b[0]) 
		{
			flag = 1;
			int k = 0;
			for (int j=i; k<len2; j++) 
			{
				if (a[j] != b[k]) {
					flag = -1;
					break;
				}
				k++;
			}
		}
	}
	return flag;
} 