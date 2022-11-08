#include <stdio.h>

int main()
{       
	int start,end;
	scanf("%d %d", &start,&end);
	if(start==end) // ends after 24hrs
		printf("The game lasted 24 hours.");

	else if(start<end) // ends same day
		printf("The game lasted %d hours.", (end-start) );

	else if(start>end) // ends next day
		printf("The game lasted %d hours.", (24-start+end) );


	return 0;
}

