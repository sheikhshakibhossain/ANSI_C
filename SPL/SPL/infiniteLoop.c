#include <stdio.h>

int main() {
	
	while (1) {
		printf("\n\nWelcome Template\n\n");
		char n;
		scanf(" %c", &n);
		if (n=='q') break;
		else if (n == 'a') printf("a\n");
		else if (n == 'b') printf("b\n");
		else if (n == 'c') printf("c\n");
		else if (n == 'd') printf("d\n");
		else if (n == 'e') printf("e\n");
		else printf("invaid\n");
	}
	
	return 0;
}

