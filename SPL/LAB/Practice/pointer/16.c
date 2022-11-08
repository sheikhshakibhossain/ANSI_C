#include <stdio.h>
# define MAX 100

int main() {
	
	char str[MAX];
	gets(str);
	
	int x = palindromeCheck(str);
	if (x==1) {
		printf("Palindrome\n");
	}
	else {
		printf("Not Palindrome\n");
	}

	return 0;
}

int palindromeCheck(char str[])
{
	int len = 0, flag = 1;
	while(str[len] != '\0') len++;

	int k = len - 1;
	for (int i=0; i<len; i++)
	{
		if ( str[i] != str[k] )
		{
			flag = 0;
			break;
		}
		k--;
	}
	return flag;
}