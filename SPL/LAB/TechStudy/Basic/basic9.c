#include <stdio.h>

int main() {

	// 9. size of data types
	int a = 1; 
	float b = 1.0; 
	char c = 'a';     // why  %ld ?
	double d = 1.0;
	printf("size of data types: \n");
	printf("int = %ld, float = %ld, double = %ld, char = %ld \n", sizeof(a), sizeof(b), sizeof(d), sizeof(c));

	return 0;
}

