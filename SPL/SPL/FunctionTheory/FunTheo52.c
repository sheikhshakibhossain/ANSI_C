#include <stdio.h>
int find_substr(char a[], char b[]);

int main() {
	
	char str1[100], str2[100];
	gets(str1);
	gets(str2);

	if ( find_substr(str1, str2)== -1 )
		printf("0\n");
	else
		printf("1\n");
	
	return 0;
}

int find_substr(char a[], char b[]) {

	// (Assuming, strlen(a)>strlen(b))
	int i = 0, flag = 1, k=0;
	while ( a[i] != '\0' ) 
	{
		if ( a[i] == b[k] )
		{
			for (int j=i; b[k]!='\0';  j++)
			{
				if (a[j] != b[k]) {
					flag = -1;
				}
				k++;
			}
		}
		i++;
	}
	return flag;
}