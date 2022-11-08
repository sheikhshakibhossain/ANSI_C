#include <stdio.h>

int main()
{       
	//6. takes and prints inputs until the user types an ’A’
	char j;
	int i;
	while(1)
	{
		i=i+1;
		scanf("%c", &j);
		if(j=='A')
			break;
		else
			printf("\nInput %d: %c", i,j);
	}

	return 0;
}

