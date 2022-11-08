#include <stdio.h>
int str_length(char str[]);
int find_substr(int a[], int b[]);

int main() {
	
	char str1[100], str2[100];
	gets(str1);
	gets(str2);
	//printf("%d", str_length(str1)); // OK
	printf("%d ", find_substr(str1, str2)); // not OK
	
	return 0;
}

int str_length(char str[]) {

	int len = 0;
	while (str[len] != '\0')
		len++;

	return len;
}

int find_substr(int a[], int b[]) { // char type hobe bolod 

	int len1 = str_length(a);
	int len2 = str_length(b);
	int flag = 0, k = 0;

	for (int i=0; i<len1; i++) 
	{
		if (a[i] == b[k]) 
		{
			flag = 1;
			for (int j=i; k<len2; j++, k++) 
			{ // end of the loop k++ hobe
				if (a[j] != b[k]) {
					flag = 0;
				}
			}
		}
	}
	if (flag == 1)
		return 1;
	else if (flag == 0)
		return -1;
} 