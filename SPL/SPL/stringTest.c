#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char name[30];
	scanf("%29s", name); // should work but it doesn't
	gets(name); // works

	printf("%s\n", name);

	printf("%d\n", atoi("12x6") * 5 ); // Output: 60   char er aga j number ache ta int a convert korbe.
	printf("%f\n", atof("4.5x32") * 2 ); // Output: 9.00000
	
	return 0;
}
