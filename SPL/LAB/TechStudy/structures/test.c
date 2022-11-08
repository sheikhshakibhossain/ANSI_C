#include <stdio.h>

typedef struct {
	char str[100];
	//char [100];
} String;

int main() {
	
	String name;
	//gets(name.str);
	scanf("%[^\n]s", name.str);
	printf("%s", name.str); // OK

	// String name;
	// gets(name);
	// printf("%s", name);
	
	return 0;
}