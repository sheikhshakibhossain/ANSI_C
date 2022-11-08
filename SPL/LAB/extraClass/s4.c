#include <stdio.h>

int main() 
{	// stdin holo ekta macro ,,,, kinda alias
	char s1[] = "akib";
	fgets(s1, sizeof(s1), stdin); // IN: rakib zaman
	puts(s1); // OUT: raki // 4 byte print korbe cuz sieof(s1) = 4; // gets a pura tai print korbe kintu code crash korbe

	int i = 0;
	while (s1[i] != '\0') 
	{
		printf("%c", s1[i]);
		i++;
	}
	return 0;
}