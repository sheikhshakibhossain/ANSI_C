#include <stdio.h>

void rev_words(char str[]);
int main() 
{
	char str[100];
	fgets(str, 100, stdin);
	rev_words(str);

	return 0;
}

void rev_words(char str[]) // NOT OK
{
	int len = 0;
	int si = 0, ei = 0;
	while(str[len] != 0) {
		len++;
	}

	for (int j=len; j>=0; j--)
	{
		if (j == 0) {
			si = 0;
		}
		else {
			si = j + 1;
		}

		for (int k=si; k<=ei; k++)
		{
			if ( str[k]==10 ) { // removes new line
				printf("i=%d, str[%d]=%c \n", len, k, str[k]);
			}
			printf("%c", str[k]);
		}
		ei = j - 1;
		printf(" ");
	}
}