#include <stdio.h>

void message();

int main() {
	
	message(); // OK
	
	return 0;
}

void message() {
	printf("This is a function\n");
}
