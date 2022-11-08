#include <stdio.h>
/* Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at
the keyboard. */

int main() {
	
	char j;
	int i=1;
	while(1)
	{
		
		scanf(" %c", &j);
		if(j=='A')
			break;
		else {
			printf("\nInput %d: %c", i,j);
			i++; 
		}
	}
	
	
	return 0;
}

