#include <stdio.h>

int main(){

	int i;
	for(i=1; i<=3; i++)	// for loop
	{
		printf("%d. Hi! Qm9pc2hha2hpCg \n", i);
	}
	printf("now i=%d \n",i);

	while(i<=5)	// while loop
	{
		printf("%d. how are you? \n", i);
		i++;
	}
	printf("now i=%d \n",i);
    
    for(int x=1; x<=10 && x%2 == 0; x++)
    {
        if(x % 2 == 0)
            printf("x = %d is even \n", x);
        else
            printf("x = %d is odd \n", x);
    }
	
	int y=3; // do while loop
	do
    {
        printf("y = %d \n", y);
        y++;
    }
    while(y<3);
    printf("after loop y = %d \n", y);
    
    
	return 0;
}
